const utils = require('../utils/utils');
const MailStatsType_volume_from = require('../models/MailStatsType_volume_from');
const MailStatsType_volume_ip = require('../models/MailStatsType_volume_ip');
const MailStatsType_volume_to = require('../models/MailStatsType_volume_to');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...MailStatsType_volume_to.fields(`${keyPrefix}to`, isInput),
            ...MailStatsType_volume_from.fields(`${keyPrefix}from`, isInput),
            ...MailStatsType_volume_ip.fields(`${keyPrefix}ip`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'to': utils.removeIfEmpty(MailStatsType_volume_to.mapping(bundle, `${keyPrefix}to`)),
            'from': utils.removeIfEmpty(MailStatsType_volume_from.mapping(bundle, `${keyPrefix}from`)),
            'ip': utils.removeIfEmpty(MailStatsType_volume_ip.mapping(bundle, `${keyPrefix}ip`)),
        }
    },
}
