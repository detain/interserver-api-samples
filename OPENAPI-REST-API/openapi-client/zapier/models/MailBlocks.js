const utils = require('../utils/utils');
const MailBlockClickHouse = require('../models/MailBlockClickHouse');
const MailBlockRspamd = require('../models/MailBlockRspamd');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}local`,
                label: `[${labelPrefix}local]`,
                children: MailBlockClickHouse.fields(`${keyPrefix}local${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}mbtrap`,
                label: `[${labelPrefix}mbtrap]`,
                children: MailBlockClickHouse.fields(`${keyPrefix}mbtrap${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}subject`,
                label: `[${labelPrefix}subject]`,
                children: MailBlockRspamd.fields(`${keyPrefix}subject${!isInput ? '[]' : ''}`, isInput, true), 
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'local': utils.childMapping(bundle.inputData?.[`${keyPrefix}local`], `${keyPrefix}local`, MailBlockClickHouse),
            'mbtrap': utils.childMapping(bundle.inputData?.[`${keyPrefix}mbtrap`], `${keyPrefix}mbtrap`, MailBlockClickHouse),
            'subject': utils.childMapping(bundle.inputData?.[`${keyPrefix}subject`], `${keyPrefix}subject`, MailBlockRspamd),
        }
    },
}
