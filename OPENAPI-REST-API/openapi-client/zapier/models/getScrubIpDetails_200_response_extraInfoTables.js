const utils = require('../utils/utils');
const getScrubIpDetails_200_response_extraInfoTables_scrub_ips = require('../models/getScrubIpDetails_200_response_extraInfoTables_scrub_ips');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...getScrubIpDetails_200_response_extraInfoTables_scrub_ips.fields(`${keyPrefix}scrub_ips`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'scrub_ips': utils.removeIfEmpty(getScrubIpDetails_200_response_extraInfoTables_scrub_ips.mapping(bundle, `${keyPrefix}scrub_ips`)),
        }
    },
}
