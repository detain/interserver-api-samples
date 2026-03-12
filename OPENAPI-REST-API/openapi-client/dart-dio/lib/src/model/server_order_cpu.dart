//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order_cpu.g.dart';

/// A CPU option available when ordering a dedicated server.
///
/// Properties:
/// * [id] - CPU ID.
/// * [price] - CPU price.
/// * [img] - CPU image.
/// * [shortDesc] - Short description of the CPU.
/// * [longDesc] - Long description of the CPU.
/// * [location] - Location of the CPU.
/// * [fsb] - Front Side Bus information.
/// * [manu] - Manufacturer information.
/// * [type] - CPU type.
/// * [speed] - CPU speed.
/// * [cache] - Cache information.
/// * [active] - Active status.
/// * [numCores] - Number of cores.
/// * [numCpus] - Number of CPUs.
/// * [benchmark] - CPU benchmark.
/// * [monthlyPrice] - Monthly price.
/// * [maxRam] - Maximum RAM supported.
/// * [minRam] - Minimum RAM required.
/// * [maxLff] - Maximum LFF (Large Form Factor) supported.
/// * [maxSff] - Maximum SFF (Small Form Factor) supported.
/// * [maxNve] - Maximum NVMe drives supported.
/// * [visible] - Visibility status.
/// * [hdIds] - Hard drive IDs.
/// * [priceDisplay] - Display of CPU price.
/// * [monthlyPriceDisplay] - Display of monthly CPU price.
@BuiltValue()
abstract class ServerOrderCPU implements Built<ServerOrderCPU, ServerOrderCPUBuilder> {
  /// CPU ID.
  @BuiltValueField(wireName: r'id')
  String? get id;

  /// CPU price.
  @BuiltValueField(wireName: r'price')
  int? get price;

  /// CPU image.
  @BuiltValueField(wireName: r'img')
  String? get img;

  /// Short description of the CPU.
  @BuiltValueField(wireName: r'short_desc')
  String? get shortDesc;

  /// Long description of the CPU.
  @BuiltValueField(wireName: r'long_desc')
  String? get longDesc;

  /// Location of the CPU.
  @BuiltValueField(wireName: r'location')
  String? get location;

  /// Front Side Bus information.
  @BuiltValueField(wireName: r'fsb')
  String? get fsb;

  /// Manufacturer information.
  @BuiltValueField(wireName: r'manu')
  String? get manu;

  /// CPU type.
  @BuiltValueField(wireName: r'type')
  String? get type;

  /// CPU speed.
  @BuiltValueField(wireName: r'speed')
  String? get speed;

  /// Cache information.
  @BuiltValueField(wireName: r'cache')
  String? get cache;

  /// Active status.
  @BuiltValueField(wireName: r'active')
  String? get active;

  /// Number of cores.
  @BuiltValueField(wireName: r'num_cores')
  String? get numCores;

  /// Number of CPUs.
  @BuiltValueField(wireName: r'num_cpus')
  String? get numCpus;

  /// CPU benchmark.
  @BuiltValueField(wireName: r'benchmark')
  String? get benchmark;

  /// Monthly price.
  @BuiltValueField(wireName: r'monthly_price')
  int? get monthlyPrice;

  /// Maximum RAM supported.
  @BuiltValueField(wireName: r'max_ram')
  String? get maxRam;

  /// Minimum RAM required.
  @BuiltValueField(wireName: r'min_ram')
  String? get minRam;

  /// Maximum LFF (Large Form Factor) supported.
  @BuiltValueField(wireName: r'max_lff')
  String? get maxLff;

  /// Maximum SFF (Small Form Factor) supported.
  @BuiltValueField(wireName: r'max_sff')
  String? get maxSff;

  /// Maximum NVMe drives supported.
  @BuiltValueField(wireName: r'max_nve')
  String? get maxNve;

  /// Visibility status.
  @BuiltValueField(wireName: r'visible')
  String? get visible;

  /// Hard drive IDs.
  @BuiltValueField(wireName: r'hd_ids')
  JsonObject? get hdIds;

  /// Display of CPU price.
  @BuiltValueField(wireName: r'price_display')
  String? get priceDisplay;

  /// Display of monthly CPU price.
  @BuiltValueField(wireName: r'monthly_price_display')
  String? get monthlyPriceDisplay;

  ServerOrderCPU._();

  factory ServerOrderCPU([void updates(ServerOrderCPUBuilder b)]) = _$ServerOrderCPU;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderCPUBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrderCPU> get serializer => _$ServerOrderCPUSerializer();
}

class _$ServerOrderCPUSerializer implements PrimitiveSerializer<ServerOrderCPU> {
  @override
  final Iterable<Type> types = const [ServerOrderCPU, _$ServerOrderCPU];

  @override
  final String wireName = r'ServerOrderCPU';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrderCPU object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.id != null) {
      yield r'id';
      yield serializers.serialize(
        object.id,
        specifiedType: const FullType(String),
      );
    }
    if (object.price != null) {
      yield r'price';
      yield serializers.serialize(
        object.price,
        specifiedType: const FullType(int),
      );
    }
    if (object.img != null) {
      yield r'img';
      yield serializers.serialize(
        object.img,
        specifiedType: const FullType(String),
      );
    }
    if (object.shortDesc != null) {
      yield r'short_desc';
      yield serializers.serialize(
        object.shortDesc,
        specifiedType: const FullType(String),
      );
    }
    if (object.longDesc != null) {
      yield r'long_desc';
      yield serializers.serialize(
        object.longDesc,
        specifiedType: const FullType(String),
      );
    }
    if (object.location != null) {
      yield r'location';
      yield serializers.serialize(
        object.location,
        specifiedType: const FullType(String),
      );
    }
    if (object.fsb != null) {
      yield r'fsb';
      yield serializers.serialize(
        object.fsb,
        specifiedType: const FullType(String),
      );
    }
    if (object.manu != null) {
      yield r'manu';
      yield serializers.serialize(
        object.manu,
        specifiedType: const FullType(String),
      );
    }
    if (object.type != null) {
      yield r'type';
      yield serializers.serialize(
        object.type,
        specifiedType: const FullType(String),
      );
    }
    if (object.speed != null) {
      yield r'speed';
      yield serializers.serialize(
        object.speed,
        specifiedType: const FullType(String),
      );
    }
    if (object.cache != null) {
      yield r'cache';
      yield serializers.serialize(
        object.cache,
        specifiedType: const FullType(String),
      );
    }
    if (object.active != null) {
      yield r'active';
      yield serializers.serialize(
        object.active,
        specifiedType: const FullType(String),
      );
    }
    if (object.numCores != null) {
      yield r'num_cores';
      yield serializers.serialize(
        object.numCores,
        specifiedType: const FullType(String),
      );
    }
    if (object.numCpus != null) {
      yield r'num_cpus';
      yield serializers.serialize(
        object.numCpus,
        specifiedType: const FullType(String),
      );
    }
    if (object.benchmark != null) {
      yield r'benchmark';
      yield serializers.serialize(
        object.benchmark,
        specifiedType: const FullType(String),
      );
    }
    if (object.monthlyPrice != null) {
      yield r'monthly_price';
      yield serializers.serialize(
        object.monthlyPrice,
        specifiedType: const FullType(int),
      );
    }
    if (object.maxRam != null) {
      yield r'max_ram';
      yield serializers.serialize(
        object.maxRam,
        specifiedType: const FullType(String),
      );
    }
    if (object.minRam != null) {
      yield r'min_ram';
      yield serializers.serialize(
        object.minRam,
        specifiedType: const FullType(String),
      );
    }
    if (object.maxLff != null) {
      yield r'max_lff';
      yield serializers.serialize(
        object.maxLff,
        specifiedType: const FullType(String),
      );
    }
    if (object.maxSff != null) {
      yield r'max_sff';
      yield serializers.serialize(
        object.maxSff,
        specifiedType: const FullType(String),
      );
    }
    if (object.maxNve != null) {
      yield r'max_nve';
      yield serializers.serialize(
        object.maxNve,
        specifiedType: const FullType(String),
      );
    }
    if (object.visible != null) {
      yield r'visible';
      yield serializers.serialize(
        object.visible,
        specifiedType: const FullType(String),
      );
    }
    if (object.hdIds != null) {
      yield r'hd_ids';
      yield serializers.serialize(
        object.hdIds,
        specifiedType: const FullType.nullable(JsonObject),
      );
    }
    if (object.priceDisplay != null) {
      yield r'price_display';
      yield serializers.serialize(
        object.priceDisplay,
        specifiedType: const FullType(String),
      );
    }
    if (object.monthlyPriceDisplay != null) {
      yield r'monthly_price_display';
      yield serializers.serialize(
        object.monthlyPriceDisplay,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerOrderCPU object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderCPUBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.id = valueDes;
          break;
        case r'price':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.price = valueDes;
          break;
        case r'img':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.img = valueDes;
          break;
        case r'short_desc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.shortDesc = valueDes;
          break;
        case r'long_desc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.longDesc = valueDes;
          break;
        case r'location':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.location = valueDes;
          break;
        case r'fsb':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.fsb = valueDes;
          break;
        case r'manu':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.manu = valueDes;
          break;
        case r'type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.type = valueDes;
          break;
        case r'speed':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.speed = valueDes;
          break;
        case r'cache':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.cache = valueDes;
          break;
        case r'active':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.active = valueDes;
          break;
        case r'num_cores':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.numCores = valueDes;
          break;
        case r'num_cpus':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.numCpus = valueDes;
          break;
        case r'benchmark':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.benchmark = valueDes;
          break;
        case r'monthly_price':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.monthlyPrice = valueDes;
          break;
        case r'max_ram':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.maxRam = valueDes;
          break;
        case r'min_ram':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.minRam = valueDes;
          break;
        case r'max_lff':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.maxLff = valueDes;
          break;
        case r'max_sff':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.maxSff = valueDes;
          break;
        case r'max_nve':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.maxNve = valueDes;
          break;
        case r'visible':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.visible = valueDes;
          break;
        case r'hd_ids':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(JsonObject),
          ) as JsonObject?;
          if (valueDes == null) continue;
          result.hdIds = valueDes;
          break;
        case r'price_display':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.priceDisplay = valueDes;
          break;
        case r'monthly_price_display':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.monthlyPriceDisplay = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerOrderCPU deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderCPUBuilder();
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

