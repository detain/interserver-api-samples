const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}containerTagId`,
                label: `[${labelPrefix}containerTagId]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}CID`,
                label: `[${labelPrefix}CID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}OID`,
                label: `[${labelPrefix}OID]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}TYPE`,
                label: `[${labelPrefix}TYPE]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}ITEM1`,
                label: `[${labelPrefix}ITEM1]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}AMT1`,
                label: `[${labelPrefix}AMT1]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}QTY1`,
                label: `[${labelPrefix}QTY1]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}CURRENCY`,
                label: `[${labelPrefix}CURRENCY]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'containerTagId': bundle.inputData?.[`${keyPrefix}containerTagId`],
            'CID': bundle.inputData?.[`${keyPrefix}CID`],
            'OID': bundle.inputData?.[`${keyPrefix}OID`],
            'TYPE': bundle.inputData?.[`${keyPrefix}TYPE`],
            'ITEM1': bundle.inputData?.[`${keyPrefix}ITEM1`],
            'AMT1': bundle.inputData?.[`${keyPrefix}AMT1`],
            'QTY1': bundle.inputData?.[`${keyPrefix}QTY1`],
            'CURRENCY': bundle.inputData?.[`${keyPrefix}CURRENCY`],
        }
    },
}
