const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}affiliate_dock_title`,
                label: `[${labelPrefix}affiliate_dock_title]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}affiliate_dock_description`,
                label: `[${labelPrefix}affiliate_dock_description]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}referrer_coupon`,
                label: `[${labelPrefix}referrer_coupon]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'affiliate_dock_title': bundle.inputData?.[`${keyPrefix}affiliate_dock_title`],
            'affiliate_dock_description': bundle.inputData?.[`${keyPrefix}affiliate_dock_description`],
            'referrer_coupon': bundle.inputData?.[`${keyPrefix}referrer_coupon`],
        }
    },
}
