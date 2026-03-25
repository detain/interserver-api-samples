const utils = require('../utils/utils');
const MailLogEntry = require('../models/MailLogEntry');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}total`,
                label: `Total number of log entries that match the supplied filters, regardless of `skip` and `limit`.  Reflects the `groupby` mode. - [${labelPrefix}total]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}skip`,
                label: `The `skip` value used for this page (echoed from the request). - [${labelPrefix}skip]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}limit`,
                label: `The `limit` value used for this page (echoed from the request). - [${labelPrefix}limit]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}emails`,
                label: `[${labelPrefix}emails]`,
                children: MailLogEntry.fields(`${keyPrefix}emails${!isInput ? '[]' : ''}`, isInput, true), 
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'total': bundle.inputData?.[`${keyPrefix}total`],
            'skip': bundle.inputData?.[`${keyPrefix}skip`],
            'limit': bundle.inputData?.[`${keyPrefix}limit`],
            'emails': utils.childMapping(bundle.inputData?.[`${keyPrefix}emails`], `${keyPrefix}emails`, MailLogEntry),
        }
    },
}
