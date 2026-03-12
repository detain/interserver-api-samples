//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_cp_data.dart';
import 'package:openapi/src/model/vps_extra_info_tables.dart';
import 'package:openapi/src/model/vps_billing_details.dart';
import 'package:openapi/src/model/vps_client_link.dart';
import 'package:openapi/src/model/vps_service_master.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/vps_plesk12_data.dart';
import 'package:openapi/src/model/vps_service_extra.dart';
import 'package:openapi/src/model/vps_service_info.dart';
import 'package:openapi/src/model/vps_da_data.dart';
import 'package:openapi/src/model/vps_service_addons.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps.g.dart';

/// Vps
///
/// Properties:
/// * [serviceInfo] 
/// * [clientLinks] 
/// * [billingDetails] 
/// * [custCurrency] 
/// * [custCurrencySymbol] 
/// * [serviceMaster] 
/// * [package] 
/// * [serviceExtra] 
/// * [extraInfoTables] 
/// * [module] 
/// * [token] 
/// * [daLink] 
/// * [srLink] 
/// * [cpData] 
/// * [daData] 
/// * [plesk12Data] 
/// * [serviceAddons] 
/// * [osTemplate] 
/// * [cpuGraphData] 
@BuiltValue()
abstract class Vps implements Built<Vps, VpsBuilder> {
  @BuiltValueField(wireName: r'serviceInfo')
  VpsServiceInfo get serviceInfo;

  @BuiltValueField(wireName: r'client_links')
  BuiltList<VpsClientLink> get clientLinks;

  @BuiltValueField(wireName: r'billingDetails')
  VpsBillingDetails get billingDetails;

  @BuiltValueField(wireName: r'custCurrency')
  String get custCurrency;

  @BuiltValueField(wireName: r'custCurrencySymbol')
  String get custCurrencySymbol;

  @BuiltValueField(wireName: r'serviceMaster')
  VpsServiceMaster get serviceMaster;

  @BuiltValueField(wireName: r'package')
  String get package;

  @BuiltValueField(wireName: r'serviceExtra')
  VpsServiceExtra get serviceExtra;

  @BuiltValueField(wireName: r'extraInfoTables')
  VpsExtraInfoTables get extraInfoTables;

  @BuiltValueField(wireName: r'module')
  String get module;

  @BuiltValueField(wireName: r'token')
  String get token;

  @BuiltValueField(wireName: r'da_link')
  int get daLink;

  @BuiltValueField(wireName: r'sr_link')
  int get srLink;

  @BuiltValueField(wireName: r'cp_data')
  VpsCPData get cpData;

  @BuiltValueField(wireName: r'da_data')
  VpsDAData get daData;

  @BuiltValueField(wireName: r'plesk12_data')
  VpsPlesk12Data get plesk12Data;

  @BuiltValueField(wireName: r'serviceAddons')
  VpsServiceAddons get serviceAddons;

  @BuiltValueField(wireName: r'os_template')
  String? get osTemplate;

  @BuiltValueField(wireName: r'cpu_graph_data')
  JsonObject? get cpuGraphData;

  Vps._();

  factory Vps([void updates(VpsBuilder b)]) = _$Vps;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<Vps> get serializer => _$VpsSerializer();
}

class _$VpsSerializer implements PrimitiveSerializer<Vps> {
  @override
  final Iterable<Type> types = const [Vps, _$Vps];

  @override
  final String wireName = r'Vps';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Vps object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'serviceInfo';
    yield serializers.serialize(
      object.serviceInfo,
      specifiedType: const FullType(VpsServiceInfo),
    );
    yield r'client_links';
    yield serializers.serialize(
      object.clientLinks,
      specifiedType: const FullType(BuiltList, [FullType(VpsClientLink)]),
    );
    yield r'billingDetails';
    yield serializers.serialize(
      object.billingDetails,
      specifiedType: const FullType(VpsBillingDetails),
    );
    yield r'custCurrency';
    yield serializers.serialize(
      object.custCurrency,
      specifiedType: const FullType(String),
    );
    yield r'custCurrencySymbol';
    yield serializers.serialize(
      object.custCurrencySymbol,
      specifiedType: const FullType(String),
    );
    yield r'serviceMaster';
    yield serializers.serialize(
      object.serviceMaster,
      specifiedType: const FullType(VpsServiceMaster),
    );
    yield r'package';
    yield serializers.serialize(
      object.package,
      specifiedType: const FullType(String),
    );
    yield r'serviceExtra';
    yield serializers.serialize(
      object.serviceExtra,
      specifiedType: const FullType(VpsServiceExtra),
    );
    yield r'extraInfoTables';
    yield serializers.serialize(
      object.extraInfoTables,
      specifiedType: const FullType(VpsExtraInfoTables),
    );
    yield r'module';
    yield serializers.serialize(
      object.module,
      specifiedType: const FullType(String),
    );
    yield r'token';
    yield serializers.serialize(
      object.token,
      specifiedType: const FullType(String),
    );
    yield r'da_link';
    yield serializers.serialize(
      object.daLink,
      specifiedType: const FullType(int),
    );
    yield r'sr_link';
    yield serializers.serialize(
      object.srLink,
      specifiedType: const FullType(int),
    );
    yield r'cp_data';
    yield serializers.serialize(
      object.cpData,
      specifiedType: const FullType(VpsCPData),
    );
    yield r'da_data';
    yield serializers.serialize(
      object.daData,
      specifiedType: const FullType(VpsDAData),
    );
    yield r'plesk12_data';
    yield serializers.serialize(
      object.plesk12Data,
      specifiedType: const FullType(VpsPlesk12Data),
    );
    yield r'serviceAddons';
    yield serializers.serialize(
      object.serviceAddons,
      specifiedType: const FullType(VpsServiceAddons),
    );
    if (object.osTemplate != null) {
      yield r'os_template';
      yield serializers.serialize(
        object.osTemplate,
        specifiedType: const FullType(String),
      );
    }
    if (object.cpuGraphData != null) {
      yield r'cpu_graph_data';
      yield serializers.serialize(
        object.cpuGraphData,
        specifiedType: const FullType.nullable(JsonObject),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    Vps object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'serviceInfo':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsServiceInfo),
          ) as VpsServiceInfo;
          result.serviceInfo.replace(valueDes);
          break;
        case r'client_links':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(VpsClientLink)]),
          ) as BuiltList<VpsClientLink>;
          result.clientLinks.replace(valueDes);
          break;
        case r'billingDetails':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsBillingDetails),
          ) as VpsBillingDetails;
          result.billingDetails.replace(valueDes);
          break;
        case r'custCurrency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.custCurrency = valueDes;
          break;
        case r'custCurrencySymbol':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.custCurrencySymbol = valueDes;
          break;
        case r'serviceMaster':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsServiceMaster),
          ) as VpsServiceMaster;
          result.serviceMaster.replace(valueDes);
          break;
        case r'package':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.package = valueDes;
          break;
        case r'serviceExtra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsServiceExtra),
          ) as VpsServiceExtra;
          result.serviceExtra.replace(valueDes);
          break;
        case r'extraInfoTables':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsExtraInfoTables),
          ) as VpsExtraInfoTables;
          result.extraInfoTables.replace(valueDes);
          break;
        case r'module':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.module = valueDes;
          break;
        case r'token':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.token = valueDes;
          break;
        case r'da_link':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.daLink = valueDes;
          break;
        case r'sr_link':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.srLink = valueDes;
          break;
        case r'cp_data':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsCPData),
          ) as VpsCPData;
          result.cpData.replace(valueDes);
          break;
        case r'da_data':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsDAData),
          ) as VpsDAData;
          result.daData.replace(valueDes);
          break;
        case r'plesk12_data':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsPlesk12Data),
          ) as VpsPlesk12Data;
          result.plesk12Data.replace(valueDes);
          break;
        case r'serviceAddons':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsServiceAddons),
          ) as VpsServiceAddons;
          result.serviceAddons.replace(valueDes);
          break;
        case r'os_template':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.osTemplate = valueDes;
          break;
        case r'cpu_graph_data':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(JsonObject),
          ) as JsonObject?;
          if (valueDes == null) continue;
          result.cpuGraphData = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  Vps deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsBuilder();
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

