//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/quickserver_service_master.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/quickserver_billing_details.dart';
import 'package:openapi/src/model/quickserver_extra_info_tables.dart';
import 'package:openapi/src/model/quickserver_service_info.dart';
import 'package:openapi/src/model/quickserver_service_extra.dart';
import 'package:openapi/src/model/quickserver_client_link.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver.g.dart';

/// Quickserver
///
/// Properties:
/// * [serviceInfo] 
/// * [clientLinks] 
/// * [billingDetails] 
/// * [custCurrency] - Currency of the customer
/// * [custCurrencySymbol] - Currency symbol of the customer
/// * [serviceMaster] 
/// * [package] - Package name
/// * [osTemplate] - Operating system template
/// * [serviceExtra] 
/// * [extraInfoTables] 
/// * [cpuGraphData] - CPU graph data
/// * [bandwidthXaxis] - Bandwidth x-axis data
/// * [bandwidthYaxis] - Bandwidth y-axis data
/// * [module] - Module information
/// * [token] - Authentication token
/// * [serviceDiskUsed] - Used disk space
/// * [serviceDiskTotal] - Total disk space
/// * [diskPercentage] - Disk usage percentage
/// * [memory] - Memory information
/// * [hdd] - HDD information
/// * [serviceOverviewExtra] 
@BuiltValue()
abstract class Quickserver implements Built<Quickserver, QuickserverBuilder> {
  @BuiltValueField(wireName: r'serviceInfo')
  QuickserverServiceInfo get serviceInfo;

  @BuiltValueField(wireName: r'client_links')
  BuiltList<QuickserverClientLink> get clientLinks;

  @BuiltValueField(wireName: r'billingDetails')
  QuickserverBillingDetails get billingDetails;

  /// Currency of the customer
  @BuiltValueField(wireName: r'custCurrency')
  String get custCurrency;

  /// Currency symbol of the customer
  @BuiltValueField(wireName: r'custCurrencySymbol')
  String get custCurrencySymbol;

  @BuiltValueField(wireName: r'serviceMaster')
  QuickserverServiceMaster get serviceMaster;

  /// Package name
  @BuiltValueField(wireName: r'package')
  String get package;

  /// Operating system template
  @BuiltValueField(wireName: r'os_template')
  String get osTemplate;

  @BuiltValueField(wireName: r'serviceExtra')
  QuickserverServiceExtra get serviceExtra;

  @BuiltValueField(wireName: r'extraInfoTables')
  QuickserverExtraInfoTables get extraInfoTables;

  /// CPU graph data
  @BuiltValueField(wireName: r'cpu_graph_data')
  String get cpuGraphData;

  /// Bandwidth x-axis data
  @BuiltValueField(wireName: r'bandwidth_xaxis')
  String get bandwidthXaxis;

  /// Bandwidth y-axis data
  @BuiltValueField(wireName: r'bandwidth_yaxis')
  String get bandwidthYaxis;

  /// Module information
  @BuiltValueField(wireName: r'module')
  String get module;

  /// Authentication token
  @BuiltValueField(wireName: r'token')
  String get token;

  /// Used disk space
  @BuiltValueField(wireName: r'service_disk_used')
  String get serviceDiskUsed;

  /// Total disk space
  @BuiltValueField(wireName: r'service_disk_total')
  String get serviceDiskTotal;

  /// Disk usage percentage
  @BuiltValueField(wireName: r'disk_percentage')
  num get diskPercentage;

  /// Memory information
  @BuiltValueField(wireName: r'memory')
  String get memory;

  /// HDD information
  @BuiltValueField(wireName: r'hdd')
  String get hdd;

  @BuiltValueField(wireName: r'service_overview_extra')
  BuiltList<String> get serviceOverviewExtra;

  Quickserver._();

  factory Quickserver([void updates(QuickserverBuilder b)]) = _$Quickserver;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<Quickserver> get serializer => _$QuickserverSerializer();
}

class _$QuickserverSerializer implements PrimitiveSerializer<Quickserver> {
  @override
  final Iterable<Type> types = const [Quickserver, _$Quickserver];

  @override
  final String wireName = r'Quickserver';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Quickserver object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'serviceInfo';
    yield serializers.serialize(
      object.serviceInfo,
      specifiedType: const FullType(QuickserverServiceInfo),
    );
    yield r'client_links';
    yield serializers.serialize(
      object.clientLinks,
      specifiedType: const FullType(BuiltList, [FullType(QuickserverClientLink)]),
    );
    yield r'billingDetails';
    yield serializers.serialize(
      object.billingDetails,
      specifiedType: const FullType(QuickserverBillingDetails),
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
      specifiedType: const FullType(QuickserverServiceMaster),
    );
    yield r'package';
    yield serializers.serialize(
      object.package,
      specifiedType: const FullType(String),
    );
    yield r'os_template';
    yield serializers.serialize(
      object.osTemplate,
      specifiedType: const FullType(String),
    );
    yield r'serviceExtra';
    yield serializers.serialize(
      object.serviceExtra,
      specifiedType: const FullType(QuickserverServiceExtra),
    );
    yield r'extraInfoTables';
    yield serializers.serialize(
      object.extraInfoTables,
      specifiedType: const FullType(QuickserverExtraInfoTables),
    );
    yield r'cpu_graph_data';
    yield serializers.serialize(
      object.cpuGraphData,
      specifiedType: const FullType(String),
    );
    yield r'bandwidth_xaxis';
    yield serializers.serialize(
      object.bandwidthXaxis,
      specifiedType: const FullType(String),
    );
    yield r'bandwidth_yaxis';
    yield serializers.serialize(
      object.bandwidthYaxis,
      specifiedType: const FullType(String),
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
    yield r'service_disk_used';
    yield serializers.serialize(
      object.serviceDiskUsed,
      specifiedType: const FullType(String),
    );
    yield r'service_disk_total';
    yield serializers.serialize(
      object.serviceDiskTotal,
      specifiedType: const FullType(String),
    );
    yield r'disk_percentage';
    yield serializers.serialize(
      object.diskPercentage,
      specifiedType: const FullType(num),
    );
    yield r'memory';
    yield serializers.serialize(
      object.memory,
      specifiedType: const FullType(String),
    );
    yield r'hdd';
    yield serializers.serialize(
      object.hdd,
      specifiedType: const FullType(String),
    );
    yield r'service_overview_extra';
    yield serializers.serialize(
      object.serviceOverviewExtra,
      specifiedType: const FullType(BuiltList, [FullType(String)]),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    Quickserver object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'serviceInfo':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(QuickserverServiceInfo),
          ) as QuickserverServiceInfo;
          result.serviceInfo.replace(valueDes);
          break;
        case r'client_links':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(QuickserverClientLink)]),
          ) as BuiltList<QuickserverClientLink>;
          result.clientLinks.replace(valueDes);
          break;
        case r'billingDetails':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(QuickserverBillingDetails),
          ) as QuickserverBillingDetails;
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
            specifiedType: const FullType(QuickserverServiceMaster),
          ) as QuickserverServiceMaster;
          result.serviceMaster.replace(valueDes);
          break;
        case r'package':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.package = valueDes;
          break;
        case r'os_template':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.osTemplate = valueDes;
          break;
        case r'serviceExtra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(QuickserverServiceExtra),
          ) as QuickserverServiceExtra;
          result.serviceExtra.replace(valueDes);
          break;
        case r'extraInfoTables':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(QuickserverExtraInfoTables),
          ) as QuickserverExtraInfoTables;
          result.extraInfoTables.replace(valueDes);
          break;
        case r'cpu_graph_data':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.cpuGraphData = valueDes;
          break;
        case r'bandwidth_xaxis':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.bandwidthXaxis = valueDes;
          break;
        case r'bandwidth_yaxis':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.bandwidthYaxis = valueDes;
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
        case r'service_disk_used':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceDiskUsed = valueDes;
          break;
        case r'service_disk_total':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceDiskTotal = valueDes;
          break;
        case r'disk_percentage':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.diskPercentage = valueDes;
          break;
        case r'memory':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.memory = valueDes;
          break;
        case r'hdd':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.hdd = valueDes;
          break;
        case r'service_overview_extra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.serviceOverviewExtra.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  Quickserver deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverBuilder();
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

