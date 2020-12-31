
# 以下2行はセット
import MyLogLib
logger = MyLogLib.getLogger(__name__)

import samplelib

logger.critical('critical')
logger.error('error')
logger.warning('warning')
logger.info('info')
logger.debug('debug')

MyLogLib.convert_to_csv()
