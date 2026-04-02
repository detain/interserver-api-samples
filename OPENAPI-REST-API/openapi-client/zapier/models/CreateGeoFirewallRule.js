const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}xdp_action`,
                label: `1 = Block,  0 = Whitelist - [${labelPrefix}xdp_action]`,
                required: true,
                type: 'integer',
                choices: [
                    '0',
                    '1',
                ],
            },
            {
                key: `${keyPrefix}destination_port`,
                label: `[${labelPrefix}destination_port]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}country_code`,
                label: `To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode - [${labelPrefix}country_code]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}asn`,
                label: `ASN number - [${labelPrefix}asn]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'xdp_action': bundle.inputData?.[`${keyPrefix}xdp_action`],
            'destination_port': bundle.inputData?.[`${keyPrefix}destination_port`],
            'country_code': bundle.inputData?.[`${keyPrefix}country_code`],
            'asn': bundle.inputData?.[`${keyPrefix}asn`],
        }
    },
}
