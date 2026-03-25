const utils = require('../utils/utils');
const getScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner = require('../models/getScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}title`,
                label: `[${labelPrefix}title]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}rows`,
                label: `[${labelPrefix}rows]`,
                children: getScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner.fields(`${keyPrefix}rows${!isInput ? '[]' : ''}`, isInput, true), 
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'title': bundle.inputData?.[`${keyPrefix}title`],
            'rows': utils.childMapping(bundle.inputData?.[`${keyPrefix}rows`], `${keyPrefix}rows`, getScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner),
        }
    },
}
