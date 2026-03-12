//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_order_put_request.g.dart';

/// request to validate a vps order
///
/// Properties:
/// * [osDistro] - OS Distribution
/// * [slices] - Number of slices
/// * [vpsPlatform] - VPS Platform
/// * [period] - Billing Period or Frequency
/// * [location] - Location
/// * [osVersion] - OS Version
/// * [hostname] - The hostname to assign to the VPS
/// * [rootpass] - Root password to assign to the VVPS
/// * [controlpanel] - Control Panel
/// * [coupon] - Coupon
/// * [comment] - Order comments or notes
@BuiltValue()
abstract class VpsOrderPutRequest implements Built<VpsOrderPutRequest, VpsOrderPutRequestBuilder> {
  /// OS Distribution
  @BuiltValueField(wireName: r'osDistro')
  String get osDistro;

  /// Number of slices
  @BuiltValueField(wireName: r'slices')
  int get slices;

  /// VPS Platform
  @BuiltValueField(wireName: r'vpsPlatform')
  VpsOrderPutRequestVpsPlatformEnum get vpsPlatform;
  // enum vpsPlatformEnum {  kvm,  hyperv,  kvmstorage,  };

  /// Billing Period or Frequency
  @BuiltValueField(wireName: r'period')
  int get period;

  /// Location
  @BuiltValueField(wireName: r'location')
  int get location;

  /// OS Version
  @BuiltValueField(wireName: r'osVersion')
  String get osVersion;

  /// The hostname to assign to the VPS
  @BuiltValueField(wireName: r'hostname')
  String get hostname;

  /// Root password to assign to the VVPS
  @BuiltValueField(wireName: r'rootpass')
  String get rootpass;

  /// Control Panel
  @BuiltValueField(wireName: r'controlpanel')
  VpsOrderPutRequestControlpanelEnum? get controlpanel;
  // enum controlpanelEnum {  none,  cpanel,  da,  };

  /// Coupon
  @BuiltValueField(wireName: r'coupon')
  String? get coupon;

  /// Order comments or notes
  @BuiltValueField(wireName: r'comment')
  String? get comment;

  VpsOrderPutRequest._();

  factory VpsOrderPutRequest([void updates(VpsOrderPutRequestBuilder b)]) = _$VpsOrderPutRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsOrderPutRequestBuilder b) => b
      ..slices = 1
      ..period = 1
      ..location = 1
      ..hostname = ''
      ..coupon = ''
      ..comment = '';

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsOrderPutRequest> get serializer => _$VpsOrderPutRequestSerializer();
}

class _$VpsOrderPutRequestSerializer implements PrimitiveSerializer<VpsOrderPutRequest> {
  @override
  final Iterable<Type> types = const [VpsOrderPutRequest, _$VpsOrderPutRequest];

  @override
  final String wireName = r'VpsOrderPutRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsOrderPutRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'osDistro';
    yield serializers.serialize(
      object.osDistro,
      specifiedType: const FullType(String),
    );
    yield r'slices';
    yield serializers.serialize(
      object.slices,
      specifiedType: const FullType(int),
    );
    yield r'vpsPlatform';
    yield serializers.serialize(
      object.vpsPlatform,
      specifiedType: const FullType(VpsOrderPutRequestVpsPlatformEnum),
    );
    yield r'period';
    yield serializers.serialize(
      object.period,
      specifiedType: const FullType(int),
    );
    yield r'location';
    yield serializers.serialize(
      object.location,
      specifiedType: const FullType(int),
    );
    yield r'osVersion';
    yield serializers.serialize(
      object.osVersion,
      specifiedType: const FullType(String),
    );
    yield r'hostname';
    yield serializers.serialize(
      object.hostname,
      specifiedType: const FullType(String),
    );
    yield r'rootpass';
    yield serializers.serialize(
      object.rootpass,
      specifiedType: const FullType(String),
    );
    if (object.controlpanel != null) {
      yield r'controlpanel';
      yield serializers.serialize(
        object.controlpanel,
        specifiedType: const FullType(VpsOrderPutRequestControlpanelEnum),
      );
    }
    if (object.coupon != null) {
      yield r'coupon';
      yield serializers.serialize(
        object.coupon,
        specifiedType: const FullType(String),
      );
    }
    if (object.comment != null) {
      yield r'comment';
      yield serializers.serialize(
        object.comment,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsOrderPutRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsOrderPutRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'osDistro':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.osDistro = valueDes;
          break;
        case r'slices':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.slices = valueDes;
          break;
        case r'vpsPlatform':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsOrderPutRequestVpsPlatformEnum),
          ) as VpsOrderPutRequestVpsPlatformEnum;
          result.vpsPlatform = valueDes;
          break;
        case r'period':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.period = valueDes;
          break;
        case r'location':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.location = valueDes;
          break;
        case r'osVersion':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.osVersion = valueDes;
          break;
        case r'hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.hostname = valueDes;
          break;
        case r'rootpass':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.rootpass = valueDes;
          break;
        case r'controlpanel':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsOrderPutRequestControlpanelEnum),
          ) as VpsOrderPutRequestControlpanelEnum;
          result.controlpanel = valueDes;
          break;
        case r'coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.coupon = valueDes;
          break;
        case r'comment':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.comment = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsOrderPutRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsOrderPutRequestBuilder();
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

class VpsOrderPutRequestVpsPlatformEnum extends EnumClass {

  /// VPS Platform
  @BuiltValueEnumConst(wireName: r'kvm')
  static const VpsOrderPutRequestVpsPlatformEnum kvm = _$vpsOrderPutRequestVpsPlatformEnum_kvm;
  /// VPS Platform
  @BuiltValueEnumConst(wireName: r'hyperv')
  static const VpsOrderPutRequestVpsPlatformEnum hyperv = _$vpsOrderPutRequestVpsPlatformEnum_hyperv;
  /// VPS Platform
  @BuiltValueEnumConst(wireName: r'kvmstorage')
  static const VpsOrderPutRequestVpsPlatformEnum kvmstorage = _$vpsOrderPutRequestVpsPlatformEnum_kvmstorage;

  static Serializer<VpsOrderPutRequestVpsPlatformEnum> get serializer => _$vpsOrderPutRequestVpsPlatformEnumSerializer;

  const VpsOrderPutRequestVpsPlatformEnum._(String name): super(name);

  static BuiltSet<VpsOrderPutRequestVpsPlatformEnum> get values => _$vpsOrderPutRequestVpsPlatformEnumValues;
  static VpsOrderPutRequestVpsPlatformEnum valueOf(String name) => _$vpsOrderPutRequestVpsPlatformEnumValueOf(name);
}

class VpsOrderPutRequestControlpanelEnum extends EnumClass {

  /// Control Panel
  @BuiltValueEnumConst(wireName: r'none')
  static const VpsOrderPutRequestControlpanelEnum none = _$vpsOrderPutRequestControlpanelEnum_none;
  /// Control Panel
  @BuiltValueEnumConst(wireName: r'cpanel')
  static const VpsOrderPutRequestControlpanelEnum cpanel = _$vpsOrderPutRequestControlpanelEnum_cpanel;
  /// Control Panel
  @BuiltValueEnumConst(wireName: r'da')
  static const VpsOrderPutRequestControlpanelEnum da = _$vpsOrderPutRequestControlpanelEnum_da;

  static Serializer<VpsOrderPutRequestControlpanelEnum> get serializer => _$vpsOrderPutRequestControlpanelEnumSerializer;

  const VpsOrderPutRequestControlpanelEnum._(String name): super(name);

  static BuiltSet<VpsOrderPutRequestControlpanelEnum> get values => _$vpsOrderPutRequestControlpanelEnumValues;
  static VpsOrderPutRequestControlpanelEnum valueOf(String name) => _$vpsOrderPutRequestControlpanelEnumValueOf(name);
}

