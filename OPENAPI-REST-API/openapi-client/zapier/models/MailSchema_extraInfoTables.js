const utils = require('../utils/utils');
const MailExtraInfoTable = require('../models/MailExtraInfoTable');
const MailTutorialsTable = require('../models/MailTutorialsTable');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...MailExtraInfoTable.fields(`${keyPrefix}mail`, isInput),
            ...MailTutorialsTable.fields(`${keyPrefix}tutorials`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'mail': utils.removeIfEmpty(MailExtraInfoTable.mapping(bundle, `${keyPrefix}mail`)),
            'tutorials': utils.removeIfEmpty(MailTutorialsTable.mapping(bundle, `${keyPrefix}tutorials`)),
        }
    },
}
