//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/config_ids.dart';
import 'package:openapi/src/model/asset_server.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/cpu.dart';
import 'package:openapi/src/model/region.dart';
import 'package:openapi/src/model/cpu_with_defaults.dart';
import 'package:openapi/src/model/form_values.dart';
import 'package:openapi/src/model/config_lists.dart';
import 'package:openapi/src/model/field_label.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order_get_response.g.dart';

/// Configuration options and pricing data returned when starting a dedicated server order.
///
/// Properties:
/// * [formValues] 
/// * [configIds] 
/// * [cpu] 
/// * [cpuLi] 
/// * [configLi] 
/// * [frequency] 
/// * [currency] 
/// * [country] 
/// * [step] 
/// * [fieldLabel] 
/// * [cpuCores] 
/// * [currencySymbol] 
/// * [custid] 
/// * [ima] 
/// * [regions] 
/// * [assetServers] 
/// * [buyItServers] 
/// * [displayShowmore] 
/// * [custDiscount] 
@BuiltValue()
abstract class ServerOrderGetResponse implements Built<ServerOrderGetResponse, ServerOrderGetResponseBuilder> {
  @BuiltValueField(wireName: r'form_values')
  FormValues get formValues;

  @BuiltValueField(wireName: r'config_ids')
  ConfigIds get configIds;

  @BuiltValueField(wireName: r'cpu')
  int get cpu;

  @BuiltValueField(wireName: r'cpu_li')
  BuiltMap<String, Cpu> get cpuLi;

  @BuiltValueField(wireName: r'config_li')
  ConfigLists get configLi;

  @BuiltValueField(wireName: r'frequency')
  int get frequency;

  @BuiltValueField(wireName: r'currency')
  String get currency;

  @BuiltValueField(wireName: r'country')
  String get country;

  @BuiltValueField(wireName: r'step')
  String get step;

  @BuiltValueField(wireName: r'field_label')
  BuiltMap<String, FieldLabel>? get fieldLabel;

  @BuiltValueField(wireName: r'cpu_cores')
  BuiltMap<String, BuiltMap<String, CpuWithDefaults>>? get cpuCores;

  @BuiltValueField(wireName: r'currencySymbol')
  String? get currencySymbol;

  @BuiltValueField(wireName: r'custid')
  int? get custid;

  @BuiltValueField(wireName: r'ima')
  String? get ima;

  @BuiltValueField(wireName: r'regions')
  BuiltList<Region>? get regions;

  @BuiltValueField(wireName: r'asset_servers')
  BuiltList<AssetServer>? get assetServers;

  @BuiltValueField(wireName: r'buy_it_servers')
  BuiltList<JsonObject>? get buyItServers;

  @BuiltValueField(wireName: r'display_showmore')
  String? get displayShowmore;

  @BuiltValueField(wireName: r'cust_discount')
  num? get custDiscount;

  ServerOrderGetResponse._();

  factory ServerOrderGetResponse([void updates(ServerOrderGetResponseBuilder b)]) = _$ServerOrderGetResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderGetResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrderGetResponse> get serializer => _$ServerOrderGetResponseSerializer();
}

class _$ServerOrderGetResponseSerializer implements PrimitiveSerializer<ServerOrderGetResponse> {
  @override
  final Iterable<Type> types = const [ServerOrderGetResponse, _$ServerOrderGetResponse];

  @override
  final String wireName = r'ServerOrderGetResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrderGetResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'form_values';
    yield serializers.serialize(
      object.formValues,
      specifiedType: const FullType(FormValues),
    );
    yield r'config_ids';
    yield serializers.serialize(
      object.configIds,
      specifiedType: const FullType(ConfigIds),
    );
    yield r'cpu';
    yield serializers.serialize(
      object.cpu,
      specifiedType: const FullType(int),
    );
    yield r'cpu_li';
    yield serializers.serialize(
      object.cpuLi,
      specifiedType: const FullType(BuiltMap, [FullType(String), FullType(Cpu)]),
    );
    yield r'config_li';
    yield serializers.serialize(
      object.configLi,
      specifiedType: const FullType(ConfigLists),
    );
    yield r'frequency';
    yield serializers.serialize(
      object.frequency,
      specifiedType: const FullType(int),
    );
    yield r'currency';
    yield serializers.serialize(
      object.currency,
      specifiedType: const FullType(String),
    );
    yield r'country';
    yield serializers.serialize(
      object.country,
      specifiedType: const FullType(String),
    );
    yield r'step';
    yield serializers.serialize(
      object.step,
      specifiedType: const FullType(String),
    );
    if (object.fieldLabel != null) {
      yield r'field_label';
      yield serializers.serialize(
        object.fieldLabel,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(FieldLabel)]),
      );
    }
    if (object.cpuCores != null) {
      yield r'cpu_cores';
      yield serializers.serialize(
        object.cpuCores,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(BuiltMap, [FullType(String), FullType(CpuWithDefaults)])]),
      );
    }
    if (object.currencySymbol != null) {
      yield r'currencySymbol';
      yield serializers.serialize(
        object.currencySymbol,
        specifiedType: const FullType(String),
      );
    }
    if (object.custid != null) {
      yield r'custid';
      yield serializers.serialize(
        object.custid,
        specifiedType: const FullType(int),
      );
    }
    if (object.ima != null) {
      yield r'ima';
      yield serializers.serialize(
        object.ima,
        specifiedType: const FullType(String),
      );
    }
    if (object.regions != null) {
      yield r'regions';
      yield serializers.serialize(
        object.regions,
        specifiedType: const FullType(BuiltList, [FullType(Region)]),
      );
    }
    if (object.assetServers != null) {
      yield r'asset_servers';
      yield serializers.serialize(
        object.assetServers,
        specifiedType: const FullType(BuiltList, [FullType(AssetServer)]),
      );
    }
    if (object.buyItServers != null) {
      yield r'buy_it_servers';
      yield serializers.serialize(
        object.buyItServers,
        specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
      );
    }
    if (object.displayShowmore != null) {
      yield r'display_showmore';
      yield serializers.serialize(
        object.displayShowmore,
        specifiedType: const FullType(String),
      );
    }
    if (object.custDiscount != null) {
      yield r'cust_discount';
      yield serializers.serialize(
        object.custDiscount,
        specifiedType: const FullType(num),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerOrderGetResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderGetResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'form_values':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(FormValues),
          ) as FormValues;
          result.formValues.replace(valueDes);
          break;
        case r'config_ids':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ConfigIds),
          ) as ConfigIds;
          result.configIds.replace(valueDes);
          break;
        case r'cpu':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.cpu = valueDes;
          break;
        case r'cpu_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(Cpu)]),
          ) as BuiltMap<String, Cpu>;
          result.cpuLi.replace(valueDes);
          break;
        case r'config_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ConfigLists),
          ) as ConfigLists;
          result.configLi.replace(valueDes);
          break;
        case r'frequency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.frequency = valueDes;
          break;
        case r'currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.currency = valueDes;
          break;
        case r'country':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.country = valueDes;
          break;
        case r'step':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.step = valueDes;
          break;
        case r'field_label':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(FieldLabel)]),
          ) as BuiltMap<String, FieldLabel>;
          result.fieldLabel.replace(valueDes);
          break;
        case r'cpu_cores':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(BuiltMap, [FullType(String), FullType(CpuWithDefaults)])]),
          ) as BuiltMap<String, BuiltMap<String, CpuWithDefaults>>;
          result.cpuCores.replace(valueDes);
          break;
        case r'currencySymbol':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.currencySymbol = valueDes;
          break;
        case r'custid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.custid = valueDes;
          break;
        case r'ima':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ima = valueDes;
          break;
        case r'regions':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(Region)]),
          ) as BuiltList<Region>;
          result.regions.replace(valueDes);
          break;
        case r'asset_servers':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(AssetServer)]),
          ) as BuiltList<AssetServer>;
          result.assetServers.replace(valueDes);
          break;
        case r'buy_it_servers':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
          ) as BuiltList<JsonObject>;
          result.buyItServers.replace(valueDes);
          break;
        case r'display_showmore':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.displayShowmore = valueDes;
          break;
        case r'cust_discount':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.custDiscount = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerOrderGetResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderGetResponseBuilder();
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

