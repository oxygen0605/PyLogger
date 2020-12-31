"""
"""

from logging import basicConfig, getLogger, DEBUG

filename = "sample_log.log"
formatter = "%(asctime)s : %(name)s : %(threadName)s : %(levelname)s : %(message)s"
basicConfig(filename=filename, format=formatter, level=DEBUG)

# write "logging start" phrase
logging_start = "=========== LOGGING START ===========\n"
with open(filename, mode='a') as f:
    f.write(logging_start)


def convert_to_csv():

    import csv
    csv_filename = filename.rsplit(".", 1)[0] + ".csv"

    with open(filename, mode='r') as log_f, open(csv_filename, "w") as csv_f:
        writer = csv.writer(csv_f, lineterminator='\n')
        for log in log_f.readlines():
            if log == logging_start:
                continue
            else:
                log = log.replace(",", ".").split(" : ")
            writer.writerow(log)
