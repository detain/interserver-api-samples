const utils = require('../utils/utils');
const QuickserverBillingDetails = require('../models/QuickserverBillingDetails');
const QuickserverClientLink = require('../models/QuickserverClientLink');
const QuickserverServiceInfo = require('../models/QuickserverServiceInfo');
const QuickserverServiceMaster = require('../models/QuickserverServiceMaster');
const Quickserver_extraInfoTables = require('../models/Quickserver_extraInfoTables');
const Quickserver_serviceExtra = require('../models/Quickserver_serviceExtra');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...QuickserverServiceInfo.fields(`${keyPrefix}serviceInfo`, isInput),
            {
                key: `${keyPrefix}client_links`,
                label: `[${labelPrefix}client_links]`,
                children: QuickserverClientLink.fields(`${keyPrefix}client_links${!isInput ? '[]' : ''}`, isInput, true), 
            },
            ...QuickserverBillingDetails.fields(`${keyPrefix}billingDetails`, isInput),
            {
                key: `${keyPrefix}custCurrency`,
                label: `Currency of the customer - [${labelPrefix}custCurrency]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}custCurrencySymbol`,
                label: `Currency symbol of the customer - [${labelPrefix}custCurrencySymbol]`,
                required: true,
                type: 'string',
            },
            ...QuickserverServiceMaster.fields(`${keyPrefix}serviceMaster`, isInput),
            {
                key: `${keyPrefix}package`,
                label: `Package name - [${labelPrefix}package]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}os_template`,
                label: `Operating system template - [${labelPrefix}os_template]`,
                required: true,
                type: 'string',
            },
            ...Quickserver_serviceExtra.fields(`${keyPrefix}serviceExtra`, isInput),
            ...Quickserver_extraInfoTables.fields(`${keyPrefix}extraInfoTables`, isInput),
            {
                key: `${keyPrefix}cpu_graph_data`,
                label: `CPU graph data - [${labelPrefix}cpu_graph_data]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}bandwidth_xaxis`,
                label: `Bandwidth x-axis data - [${labelPrefix}bandwidth_xaxis]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}bandwidth_yaxis`,
                label: `Bandwidth y-axis data - [${labelPrefix}bandwidth_yaxis]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}module`,
                label: `Module information - [${labelPrefix}module]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}token`,
                label: `Authentication token - [${labelPrefix}token]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_disk_used`,
                label: `Used disk space - [${labelPrefix}service_disk_used]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_disk_total`,
                label: `Total disk space - [${labelPrefix}service_disk_total]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}disk_percentage`,
                label: `Disk usage percentage - [${labelPrefix}disk_percentage]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}memory`,
                label: `Memory information - [${labelPrefix}memory]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}hdd`,
                label: `HDD information - [${labelPrefix}hdd]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_overview_extra`,
                label: `[${labelPrefix}service_overview_extra]`,
                required: true,
                list: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'serviceInfo': utils.removeIfEmpty(QuickserverServiceInfo.mapping(bundle, `${keyPrefix}serviceInfo`)),
            'client_links': utils.childMapping(bundle.inputData?.[`${keyPrefix}client_links`], `${keyPrefix}client_links`, QuickserverClientLink),
            'billingDetails': utils.removeIfEmpty(QuickserverBillingDetails.mapping(bundle, `${keyPrefix}billingDetails`)),
            'custCurrency': bundle.inputData?.[`${keyPrefix}custCurrency`],
            'custCurrencySymbol': bundle.inputData?.[`${keyPrefix}custCurrencySymbol`],
            'serviceMaster': utils.removeIfEmpty(QuickserverServiceMaster.mapping(bundle, `${keyPrefix}serviceMaster`)),
            'package': bundle.inputData?.[`${keyPrefix}package`],
            'os_template': bundle.inputData?.[`${keyPrefix}os_template`],
            'serviceExtra': utils.removeIfEmpty(Quickserver_serviceExtra.mapping(bundle, `${keyPrefix}serviceExtra`)),
            'extraInfoTables': utils.removeIfEmpty(Quickserver_extraInfoTables.mapping(bundle, `${keyPrefix}extraInfoTables`)),
            'cpu_graph_data': bundle.inputData?.[`${keyPrefix}cpu_graph_data`],
            'bandwidth_xaxis': bundle.inputData?.[`${keyPrefix}bandwidth_xaxis`],
            'bandwidth_yaxis': bundle.inputData?.[`${keyPrefix}bandwidth_yaxis`],
            'module': bundle.inputData?.[`${keyPrefix}module`],
            'token': bundle.inputData?.[`${keyPrefix}token`],
            'service_disk_used': bundle.inputData?.[`${keyPrefix}service_disk_used`],
            'service_disk_total': bundle.inputData?.[`${keyPrefix}service_disk_total`],
            'disk_percentage': bundle.inputData?.[`${keyPrefix}disk_percentage`],
            'memory': bundle.inputData?.[`${keyPrefix}memory`],
            'hdd': bundle.inputData?.[`${keyPrefix}hdd`],
            'service_overview_extra': bundle.inputData?.[`${keyPrefix}service_overview_extra`],
        }
    },
}
