const utils = require('../utils/utils');
const VpsOrder_locationNames = require('../models/VpsOrder_locationNames');
const VpsOrder_locationStock = require('../models/VpsOrder_locationStock');
const VpsOrder_osNames = require('../models/VpsOrder_osNames');
const VpsOrder_packageCosts = require('../models/VpsOrder_packageCosts');
const VpsOrder_platformNames = require('../models/VpsOrder_platformNames');
const VpsOrder_platformPackages = require('../models/VpsOrder_platformPackages');
const VpsOrder_serviceTypes = require('../models/VpsOrder_serviceTypes');
const VpsOrder_templates = require('../models/VpsOrder_templates');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}vpsSliceSsdOvzCost`,
                label: `Cost of VPS Slice SSD OVZ - [${labelPrefix}vpsSliceSsdOvzCost]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}vpsSliceOvzCost`,
                label: `Cost of VPS Slice OVZ - [${labelPrefix}vpsSliceOvzCost]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}vpsSliceSsdVirtuozzoCost`,
                label: `Cost of VPS Slice SSD Virtuozzo - [${labelPrefix}vpsSliceSsdVirtuozzoCost]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}vpsSliceVirtuozzoCost`,
                label: `Cost of VPS Slice Virtuozzo - [${labelPrefix}vpsSliceVirtuozzoCost]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}vpsSliceHypervCost`,
                label: `Cost of VPS Slice HyperV - [${labelPrefix}vpsSliceHypervCost]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}vpsSliceVmwareCost`,
                label: `Cost of VPS Slice VMware - [${labelPrefix}vpsSliceVmwareCost]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}vpsSliceLxcCost`,
                label: `Cost of VPS Slice LXC - [${labelPrefix}vpsSliceLxcCost]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}vpsSliceXenCost`,
                label: `Cost of VPS Slice Xen - [${labelPrefix}vpsSliceXenCost]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}vpsSliceKvmLCost`,
                label: `Cost of VPS Slice KVM L - [${labelPrefix}vpsSliceKvmLCost]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}vpsSliceKvmStorageCost`,
                label: `Cost of VPS Slice KVM Storage - [${labelPrefix}vpsSliceKvmStorageCost]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}vpsNyCost`,
                label: `Cost of VPS in NY - [${labelPrefix}vpsNyCost]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}vpsSliceKvmWCost`,
                label: `Cost of VPS Slice KVM Windows - [${labelPrefix}vpsSliceKvmWCost]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}cpanelCost`,
                label: `Cost of cPanel - [${labelPrefix}cpanelCost]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}daCost`,
                label: `Cost of DirectAdmin (DA) - [${labelPrefix}daCost]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}ramSlice`,
                label: `RAM for VPS Slice - [${labelPrefix}ramSlice]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}hdSlice`,
                label: `Hard Disk for VPS Slice - [${labelPrefix}hdSlice]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}hdStorageSlice`,
                label: `Storage Hard Disk for VPS Slice - [${labelPrefix}hdStorageSlice]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}bwSlice`,
                label: `Bandwidth for VPS Slice - [${labelPrefix}bwSlice]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}bwType`,
                label: `Bandwidth Type - [${labelPrefix}bwType]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}bwTotal`,
                label: `Total Bandwidth - [${labelPrefix}bwTotal]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}maxSlices`,
                label: `Maximum Slices - [${labelPrefix}maxSlices]`,
                required: true,
                type: 'string',
            },
            ...VpsOrder_platformPackages.fields(`${keyPrefix}platformPackages`, isInput),
            ...VpsOrder_platformNames.fields(`${keyPrefix}platformNames`, isInput),
            ...VpsOrder_packageCosts.fields(`${keyPrefix}packageCosts`, isInput),
            ...VpsOrder_locationStock.fields(`${keyPrefix}locationStock`, isInput),
            ...VpsOrder_locationNames.fields(`${keyPrefix}locationNames`, isInput),
            ...VpsOrder_osNames.fields(`${keyPrefix}osNames`, isInput),
            ...VpsOrder_templates.fields(`${keyPrefix}templates`, isInput),
            ...VpsOrder_serviceTypes.fields(`${keyPrefix}serviceTypes`, isInput),
            {
                key: `${keyPrefix}currency`,
                label: `Currency - [${labelPrefix}currency]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}currencySymbol`,
                label: `Currency Symbol - [${labelPrefix}currencySymbol]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'vpsSliceSsdOvzCost': bundle.inputData?.[`${keyPrefix}vpsSliceSsdOvzCost`],
            'vpsSliceOvzCost': bundle.inputData?.[`${keyPrefix}vpsSliceOvzCost`],
            'vpsSliceSsdVirtuozzoCost': bundle.inputData?.[`${keyPrefix}vpsSliceSsdVirtuozzoCost`],
            'vpsSliceVirtuozzoCost': bundle.inputData?.[`${keyPrefix}vpsSliceVirtuozzoCost`],
            'vpsSliceHypervCost': bundle.inputData?.[`${keyPrefix}vpsSliceHypervCost`],
            'vpsSliceVmwareCost': bundle.inputData?.[`${keyPrefix}vpsSliceVmwareCost`],
            'vpsSliceLxcCost': bundle.inputData?.[`${keyPrefix}vpsSliceLxcCost`],
            'vpsSliceXenCost': bundle.inputData?.[`${keyPrefix}vpsSliceXenCost`],
            'vpsSliceKvmLCost': bundle.inputData?.[`${keyPrefix}vpsSliceKvmLCost`],
            'vpsSliceKvmStorageCost': bundle.inputData?.[`${keyPrefix}vpsSliceKvmStorageCost`],
            'vpsNyCost': bundle.inputData?.[`${keyPrefix}vpsNyCost`],
            'vpsSliceKvmWCost': bundle.inputData?.[`${keyPrefix}vpsSliceKvmWCost`],
            'cpanelCost': bundle.inputData?.[`${keyPrefix}cpanelCost`],
            'daCost': bundle.inputData?.[`${keyPrefix}daCost`],
            'ramSlice': bundle.inputData?.[`${keyPrefix}ramSlice`],
            'hdSlice': bundle.inputData?.[`${keyPrefix}hdSlice`],
            'hdStorageSlice': bundle.inputData?.[`${keyPrefix}hdStorageSlice`],
            'bwSlice': bundle.inputData?.[`${keyPrefix}bwSlice`],
            'bwType': bundle.inputData?.[`${keyPrefix}bwType`],
            'bwTotal': bundle.inputData?.[`${keyPrefix}bwTotal`],
            'maxSlices': bundle.inputData?.[`${keyPrefix}maxSlices`],
            'platformPackages': utils.removeIfEmpty(VpsOrder_platformPackages.mapping(bundle, `${keyPrefix}platformPackages`)),
            'platformNames': utils.removeIfEmpty(VpsOrder_platformNames.mapping(bundle, `${keyPrefix}platformNames`)),
            'packageCosts': utils.removeIfEmpty(VpsOrder_packageCosts.mapping(bundle, `${keyPrefix}packageCosts`)),
            'locationStock': utils.removeIfEmpty(VpsOrder_locationStock.mapping(bundle, `${keyPrefix}locationStock`)),
            'locationNames': utils.removeIfEmpty(VpsOrder_locationNames.mapping(bundle, `${keyPrefix}locationNames`)),
            'osNames': utils.removeIfEmpty(VpsOrder_osNames.mapping(bundle, `${keyPrefix}osNames`)),
            'templates': utils.removeIfEmpty(VpsOrder_templates.mapping(bundle, `${keyPrefix}templates`)),
            'serviceTypes': utils.removeIfEmpty(VpsOrder_serviceTypes.mapping(bundle, `${keyPrefix}serviceTypes`)),
            'currency': bundle.inputData?.[`${keyPrefix}currency`],
            'currencySymbol': bundle.inputData?.[`${keyPrefix}currencySymbol`],
        }
    },
}
