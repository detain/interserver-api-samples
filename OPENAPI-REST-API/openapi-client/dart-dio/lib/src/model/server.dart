//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/server_extra_info_tables.dart';
import 'package:openapi/src/model/server_network_info.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/server_locations.dart';
import 'package:openapi/src/model/server_client_link.dart';
import 'package:openapi/src/model/server_service_info.dart';
import 'package:openapi/src/model/server_billing_details.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server.g.dart';

/// Server
///
/// Properties:
/// * [ipmiAuth] 
/// * [clientLinks] 
/// * [billingDetails] 
/// * [custCurrency] 
/// * [custCurrencySymbol] 
/// * [package] 
/// * [serviceExtra] 
/// * [locations] 
/// * [networkInfo] 
/// * [extraInfoTables] 
/// * [serviceInfo] 
@BuiltValue()
abstract class Server implements Built<Server, ServerBuilder> {
  @BuiltValueField(wireName: r'ipmiAuth')
  bool get ipmiAuth;

  @BuiltValueField(wireName: r'client_links')
  BuiltList<ServerClientLink> get clientLinks;

  @BuiltValueField(wireName: r'billingDetails')
  ServerBillingDetails get billingDetails;

  @BuiltValueField(wireName: r'custCurrency')
  String get custCurrency;

  @BuiltValueField(wireName: r'custCurrencySymbol')
  String get custCurrencySymbol;

  @BuiltValueField(wireName: r'package')
  String get package;

  @BuiltValueField(wireName: r'serviceExtra')
  BuiltList<String> get serviceExtra;

  @BuiltValueField(wireName: r'locations')
  ServerLocations get locations;

  @BuiltValueField(wireName: r'networkInfo')
  ServerNetworkInfo get networkInfo;

  @BuiltValueField(wireName: r'extraInfoTables')
  ServerExtraInfoTables get extraInfoTables;

  @BuiltValueField(wireName: r'serviceInfo')
  ServerServiceInfo get serviceInfo;

  Server._();

  factory Server([void updates(ServerBuilder b)]) = _$Server;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<Server> get serializer => _$ServerSerializer();
}

class _$ServerSerializer implements PrimitiveSerializer<Server> {
  @override
  final Iterable<Type> types = const [Server, _$Server];

  @override
  final String wireName = r'Server';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Server object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'ipmiAuth';
    yield serializers.serialize(
      object.ipmiAuth,
      specifiedType: const FullType(bool),
    );
    yield r'client_links';
    yield serializers.serialize(
      object.clientLinks,
      specifiedType: const FullType(BuiltList, [FullType(ServerClientLink)]),
    );
    yield r'billingDetails';
    yield serializers.serialize(
      object.billingDetails,
      specifiedType: const FullType(ServerBillingDetails),
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
    yield r'package';
    yield serializers.serialize(
      object.package,
      specifiedType: const FullType(String),
    );
    yield r'serviceExtra';
    yield serializers.serialize(
      object.serviceExtra,
      specifiedType: const FullType(BuiltList, [FullType(String)]),
    );
    yield r'locations';
    yield serializers.serialize(
      object.locations,
      specifiedType: const FullType(ServerLocations),
    );
    yield r'networkInfo';
    yield serializers.serialize(
      object.networkInfo,
      specifiedType: const FullType(ServerNetworkInfo),
    );
    yield r'extraInfoTables';
    yield serializers.serialize(
      object.extraInfoTables,
      specifiedType: const FullType(ServerExtraInfoTables),
    );
    yield r'serviceInfo';
    yield serializers.serialize(
      object.serviceInfo,
      specifiedType: const FullType(ServerServiceInfo),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    Server object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'ipmiAuth':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.ipmiAuth = valueDes;
          break;
        case r'client_links':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(ServerClientLink)]),
          ) as BuiltList<ServerClientLink>;
          result.clientLinks.replace(valueDes);
          break;
        case r'billingDetails':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerBillingDetails),
          ) as ServerBillingDetails;
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
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.serviceExtra.replace(valueDes);
          break;
        case r'locations':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerLocations),
          ) as ServerLocations;
          result.locations.replace(valueDes);
          break;
        case r'networkInfo':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerNetworkInfo),
          ) as ServerNetworkInfo;
          result.networkInfo.replace(valueDes);
          break;
        case r'extraInfoTables':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerExtraInfoTables),
          ) as ServerExtraInfoTables;
          result.extraInfoTables.replace(valueDes);
          break;
        case r'serviceInfo':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerServiceInfo),
          ) as ServerServiceInfo;
          result.serviceInfo.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  Server deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerBuilder();
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

