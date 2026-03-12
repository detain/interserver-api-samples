//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_order_service_types.dart';
import 'package:openapi/src/model/vps_order_templates.dart';
import 'package:openapi/src/model/vps_order_location_stock.dart';
import 'package:openapi/src/model/vps_order_package_costs.dart';
import 'package:openapi/src/model/vps_order_platform_packages.dart';
import 'package:openapi/src/model/vps_order_os_names.dart';
import 'package:openapi/src/model/vps_order_location_names.dart';
import 'package:openapi/src/model/vps_order_platform_names.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_order.g.dart';

/// Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.
///
/// Properties:
/// * [vpsSliceSsdOvzCost] - Cost of VPS Slice SSD OVZ
/// * [vpsSliceOvzCost] - Cost of VPS Slice OVZ
/// * [vpsSliceSsdVirtuozzoCost] - Cost of VPS Slice SSD Virtuozzo
/// * [vpsSliceVirtuozzoCost] - Cost of VPS Slice Virtuozzo
/// * [vpsSliceHypervCost] - Cost of VPS Slice HyperV
/// * [vpsSliceVmwareCost] - Cost of VPS Slice VMware
/// * [vpsSliceLxcCost] - Cost of VPS Slice LXC
/// * [vpsSliceXenCost] - Cost of VPS Slice Xen
/// * [vpsSliceKvmLCost] - Cost of VPS Slice KVM L
/// * [vpsSliceKvmStorageCost] - Cost of VPS Slice KVM Storage
/// * [vpsNyCost] - Cost of VPS in NY
/// * [vpsSliceKvmWCost] - Cost of VPS Slice KVM Windows
/// * [cpanelCost] - Cost of cPanel
/// * [daCost] - Cost of DirectAdmin (DA)
/// * [ramSlice] - RAM for VPS Slice
/// * [hdSlice] - Hard Disk for VPS Slice
/// * [hdStorageSlice] - Storage Hard Disk for VPS Slice
/// * [bwSlice] - Bandwidth for VPS Slice
/// * [bwType] - Bandwidth Type
/// * [bwTotal] - Total Bandwidth
/// * [maxSlices] - Maximum Slices
/// * [platformPackages] 
/// * [platformNames] 
/// * [packageCosts] 
/// * [locationStock] 
/// * [locationNames] 
/// * [osNames] 
/// * [templates] 
/// * [serviceTypes] 
/// * [currency] - Currency
/// * [currencySymbol] - Currency Symbol
@BuiltValue()
abstract class VpsOrder implements Built<VpsOrder, VpsOrderBuilder> {
  /// Cost of VPS Slice SSD OVZ
  @BuiltValueField(wireName: r'vpsSliceSsdOvzCost')
  num get vpsSliceSsdOvzCost;

  /// Cost of VPS Slice OVZ
  @BuiltValueField(wireName: r'vpsSliceOvzCost')
  num get vpsSliceOvzCost;

  /// Cost of VPS Slice SSD Virtuozzo
  @BuiltValueField(wireName: r'vpsSliceSsdVirtuozzoCost')
  num get vpsSliceSsdVirtuozzoCost;

  /// Cost of VPS Slice Virtuozzo
  @BuiltValueField(wireName: r'vpsSliceVirtuozzoCost')
  num get vpsSliceVirtuozzoCost;

  /// Cost of VPS Slice HyperV
  @BuiltValueField(wireName: r'vpsSliceHypervCost')
  num get vpsSliceHypervCost;

  /// Cost of VPS Slice VMware
  @BuiltValueField(wireName: r'vpsSliceVmwareCost')
  num get vpsSliceVmwareCost;

  /// Cost of VPS Slice LXC
  @BuiltValueField(wireName: r'vpsSliceLxcCost')
  num get vpsSliceLxcCost;

  /// Cost of VPS Slice Xen
  @BuiltValueField(wireName: r'vpsSliceXenCost')
  num get vpsSliceXenCost;

  /// Cost of VPS Slice KVM L
  @BuiltValueField(wireName: r'vpsSliceKvmLCost')
  num get vpsSliceKvmLCost;

  /// Cost of VPS Slice KVM Storage
  @BuiltValueField(wireName: r'vpsSliceKvmStorageCost')
  num get vpsSliceKvmStorageCost;

  /// Cost of VPS in NY
  @BuiltValueField(wireName: r'vpsNyCost')
  num get vpsNyCost;

  /// Cost of VPS Slice KVM Windows
  @BuiltValueField(wireName: r'vpsSliceKvmWCost')
  num get vpsSliceKvmWCost;

  /// Cost of cPanel
  @BuiltValueField(wireName: r'cpanelCost')
  num get cpanelCost;

  /// Cost of DirectAdmin (DA)
  @BuiltValueField(wireName: r'daCost')
  num get daCost;

  /// RAM for VPS Slice
  @BuiltValueField(wireName: r'ramSlice')
  String get ramSlice;

  /// Hard Disk for VPS Slice
  @BuiltValueField(wireName: r'hdSlice')
  String get hdSlice;

  /// Storage Hard Disk for VPS Slice
  @BuiltValueField(wireName: r'hdStorageSlice')
  String get hdStorageSlice;

  /// Bandwidth for VPS Slice
  @BuiltValueField(wireName: r'bwSlice')
  String get bwSlice;

  /// Bandwidth Type
  @BuiltValueField(wireName: r'bwType')
  String get bwType;

  /// Total Bandwidth
  @BuiltValueField(wireName: r'bwTotal')
  num get bwTotal;

  /// Maximum Slices
  @BuiltValueField(wireName: r'maxSlices')
  String get maxSlices;

  @BuiltValueField(wireName: r'platformPackages')
  VpsOrderPlatformPackages get platformPackages;

  @BuiltValueField(wireName: r'platformNames')
  VpsOrderPlatformNames get platformNames;

  @BuiltValueField(wireName: r'packageCosts')
  VpsOrderPackageCosts get packageCosts;

  @BuiltValueField(wireName: r'locationStock')
  VpsOrderLocationStock get locationStock;

  @BuiltValueField(wireName: r'locationNames')
  VpsOrderLocationNames get locationNames;

  @BuiltValueField(wireName: r'osNames')
  VpsOrderOsNames get osNames;

  @BuiltValueField(wireName: r'templates')
  VpsOrderTemplates get templates;

  @BuiltValueField(wireName: r'serviceTypes')
  VpsOrderServiceTypes get serviceTypes;

  /// Currency
  @BuiltValueField(wireName: r'currency')
  String get currency;

  /// Currency Symbol
  @BuiltValueField(wireName: r'currencySymbol')
  String get currencySymbol;

  VpsOrder._();

  factory VpsOrder([void updates(VpsOrderBuilder b)]) = _$VpsOrder;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsOrderBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsOrder> get serializer => _$VpsOrderSerializer();
}

class _$VpsOrderSerializer implements PrimitiveSerializer<VpsOrder> {
  @override
  final Iterable<Type> types = const [VpsOrder, _$VpsOrder];

  @override
  final String wireName = r'VpsOrder';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'vpsSliceSsdOvzCost';
    yield serializers.serialize(
      object.vpsSliceSsdOvzCost,
      specifiedType: const FullType(num),
    );
    yield r'vpsSliceOvzCost';
    yield serializers.serialize(
      object.vpsSliceOvzCost,
      specifiedType: const FullType(num),
    );
    yield r'vpsSliceSsdVirtuozzoCost';
    yield serializers.serialize(
      object.vpsSliceSsdVirtuozzoCost,
      specifiedType: const FullType(num),
    );
    yield r'vpsSliceVirtuozzoCost';
    yield serializers.serialize(
      object.vpsSliceVirtuozzoCost,
      specifiedType: const FullType(num),
    );
    yield r'vpsSliceHypervCost';
    yield serializers.serialize(
      object.vpsSliceHypervCost,
      specifiedType: const FullType(num),
    );
    yield r'vpsSliceVmwareCost';
    yield serializers.serialize(
      object.vpsSliceVmwareCost,
      specifiedType: const FullType(num),
    );
    yield r'vpsSliceLxcCost';
    yield serializers.serialize(
      object.vpsSliceLxcCost,
      specifiedType: const FullType(num),
    );
    yield r'vpsSliceXenCost';
    yield serializers.serialize(
      object.vpsSliceXenCost,
      specifiedType: const FullType(num),
    );
    yield r'vpsSliceKvmLCost';
    yield serializers.serialize(
      object.vpsSliceKvmLCost,
      specifiedType: const FullType(num),
    );
    yield r'vpsSliceKvmStorageCost';
    yield serializers.serialize(
      object.vpsSliceKvmStorageCost,
      specifiedType: const FullType(num),
    );
    yield r'vpsNyCost';
    yield serializers.serialize(
      object.vpsNyCost,
      specifiedType: const FullType(num),
    );
    yield r'vpsSliceKvmWCost';
    yield serializers.serialize(
      object.vpsSliceKvmWCost,
      specifiedType: const FullType(num),
    );
    yield r'cpanelCost';
    yield serializers.serialize(
      object.cpanelCost,
      specifiedType: const FullType(num),
    );
    yield r'daCost';
    yield serializers.serialize(
      object.daCost,
      specifiedType: const FullType(num),
    );
    yield r'ramSlice';
    yield serializers.serialize(
      object.ramSlice,
      specifiedType: const FullType(String),
    );
    yield r'hdSlice';
    yield serializers.serialize(
      object.hdSlice,
      specifiedType: const FullType(String),
    );
    yield r'hdStorageSlice';
    yield serializers.serialize(
      object.hdStorageSlice,
      specifiedType: const FullType(String),
    );
    yield r'bwSlice';
    yield serializers.serialize(
      object.bwSlice,
      specifiedType: const FullType(String),
    );
    yield r'bwType';
    yield serializers.serialize(
      object.bwType,
      specifiedType: const FullType(String),
    );
    yield r'bwTotal';
    yield serializers.serialize(
      object.bwTotal,
      specifiedType: const FullType(num),
    );
    yield r'maxSlices';
    yield serializers.serialize(
      object.maxSlices,
      specifiedType: const FullType(String),
    );
    yield r'platformPackages';
    yield serializers.serialize(
      object.platformPackages,
      specifiedType: const FullType(VpsOrderPlatformPackages),
    );
    yield r'platformNames';
    yield serializers.serialize(
      object.platformNames,
      specifiedType: const FullType(VpsOrderPlatformNames),
    );
    yield r'packageCosts';
    yield serializers.serialize(
      object.packageCosts,
      specifiedType: const FullType(VpsOrderPackageCosts),
    );
    yield r'locationStock';
    yield serializers.serialize(
      object.locationStock,
      specifiedType: const FullType(VpsOrderLocationStock),
    );
    yield r'locationNames';
    yield serializers.serialize(
      object.locationNames,
      specifiedType: const FullType(VpsOrderLocationNames),
    );
    yield r'osNames';
    yield serializers.serialize(
      object.osNames,
      specifiedType: const FullType(VpsOrderOsNames),
    );
    yield r'templates';
    yield serializers.serialize(
      object.templates,
      specifiedType: const FullType(VpsOrderTemplates),
    );
    yield r'serviceTypes';
    yield serializers.serialize(
      object.serviceTypes,
      specifiedType: const FullType(VpsOrderServiceTypes),
    );
    yield r'currency';
    yield serializers.serialize(
      object.currency,
      specifiedType: const FullType(String),
    );
    yield r'currencySymbol';
    yield serializers.serialize(
      object.currencySymbol,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsOrderBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'vpsSliceSsdOvzCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.vpsSliceSsdOvzCost = valueDes;
          break;
        case r'vpsSliceOvzCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.vpsSliceOvzCost = valueDes;
          break;
        case r'vpsSliceSsdVirtuozzoCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.vpsSliceSsdVirtuozzoCost = valueDes;
          break;
        case r'vpsSliceVirtuozzoCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.vpsSliceVirtuozzoCost = valueDes;
          break;
        case r'vpsSliceHypervCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.vpsSliceHypervCost = valueDes;
          break;
        case r'vpsSliceVmwareCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.vpsSliceVmwareCost = valueDes;
          break;
        case r'vpsSliceLxcCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.vpsSliceLxcCost = valueDes;
          break;
        case r'vpsSliceXenCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.vpsSliceXenCost = valueDes;
          break;
        case r'vpsSliceKvmLCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.vpsSliceKvmLCost = valueDes;
          break;
        case r'vpsSliceKvmStorageCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.vpsSliceKvmStorageCost = valueDes;
          break;
        case r'vpsNyCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.vpsNyCost = valueDes;
          break;
        case r'vpsSliceKvmWCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.vpsSliceKvmWCost = valueDes;
          break;
        case r'cpanelCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.cpanelCost = valueDes;
          break;
        case r'daCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.daCost = valueDes;
          break;
        case r'ramSlice':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ramSlice = valueDes;
          break;
        case r'hdSlice':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.hdSlice = valueDes;
          break;
        case r'hdStorageSlice':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.hdStorageSlice = valueDes;
          break;
        case r'bwSlice':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.bwSlice = valueDes;
          break;
        case r'bwType':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.bwType = valueDes;
          break;
        case r'bwTotal':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.bwTotal = valueDes;
          break;
        case r'maxSlices':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.maxSlices = valueDes;
          break;
        case r'platformPackages':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsOrderPlatformPackages),
          ) as VpsOrderPlatformPackages;
          result.platformPackages.replace(valueDes);
          break;
        case r'platformNames':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsOrderPlatformNames),
          ) as VpsOrderPlatformNames;
          result.platformNames.replace(valueDes);
          break;
        case r'packageCosts':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsOrderPackageCosts),
          ) as VpsOrderPackageCosts;
          result.packageCosts.replace(valueDes);
          break;
        case r'locationStock':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsOrderLocationStock),
          ) as VpsOrderLocationStock;
          result.locationStock.replace(valueDes);
          break;
        case r'locationNames':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsOrderLocationNames),
          ) as VpsOrderLocationNames;
          result.locationNames.replace(valueDes);
          break;
        case r'osNames':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsOrderOsNames),
          ) as VpsOrderOsNames;
          result.osNames.replace(valueDes);
          break;
        case r'templates':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsOrderTemplates),
          ) as VpsOrderTemplates;
          result.templates.replace(valueDes);
          break;
        case r'serviceTypes':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsOrderServiceTypes),
          ) as VpsOrderServiceTypes;
          result.serviceTypes.replace(valueDes);
          break;
        case r'currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.currency = valueDes;
          break;
        case r'currencySymbol':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.currencySymbol = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsOrder deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsOrderBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}

