using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// An individual package tied to one of our services.
  /// </summary>
  [DataContract]
  public class Service {
    /// <summary>
    /// Gets or Sets ServicesId
    /// </summary>
    [DataMember(Name="services_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_id")]
    public int? ServicesId { get; set; }

    /// <summary>
    /// Gets or Sets ServicesName
    /// </summary>
    [DataMember(Name="services_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_name")]
    public string ServicesName { get; set; }

    /// <summary>
    /// Gets or Sets ServicesCost
    /// </summary>
    [DataMember(Name="services_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_cost")]
    public decimal? ServicesCost { get; set; }

    /// <summary>
    /// Gets or Sets ServicesCurrency
    /// </summary>
    [DataMember(Name="services_currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_currency")]
    public string ServicesCurrency { get; set; }

    /// <summary>
    /// Gets or Sets ServicesCategory
    /// </summary>
    [DataMember(Name="services_category", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_category")]
    public int? ServicesCategory { get; set; }

    /// <summary>
    /// Gets or Sets ServicesBuyable
    /// </summary>
    [DataMember(Name="services_buyable", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_buyable")]
    public bool? ServicesBuyable { get; set; }

    /// <summary>
    /// Gets or Sets ServicesType
    /// </summary>
    [DataMember(Name="services_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_type")]
    public int? ServicesType { get; set; }

    /// <summary>
    /// Gets or Sets ServicesField1
    /// </summary>
    [DataMember(Name="services_field1", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_field1")]
    public string ServicesField1 { get; set; }

    /// <summary>
    /// Gets or Sets ServicesField2
    /// </summary>
    [DataMember(Name="services_field2", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_field2")]
    public string ServicesField2 { get; set; }

    /// <summary>
    /// Gets or Sets ServicesModule
    /// </summary>
    [DataMember(Name="services_module", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_module")]
    public string ServicesModule { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Service {\n");
      sb.Append("  ServicesId: ").Append(ServicesId).Append("\n");
      sb.Append("  ServicesName: ").Append(ServicesName).Append("\n");
      sb.Append("  ServicesCost: ").Append(ServicesCost).Append("\n");
      sb.Append("  ServicesCurrency: ").Append(ServicesCurrency).Append("\n");
      sb.Append("  ServicesCategory: ").Append(ServicesCategory).Append("\n");
      sb.Append("  ServicesBuyable: ").Append(ServicesBuyable).Append("\n");
      sb.Append("  ServicesType: ").Append(ServicesType).Append("\n");
      sb.Append("  ServicesField1: ").Append(ServicesField1).Append("\n");
      sb.Append("  ServicesField2: ").Append(ServicesField2).Append("\n");
      sb.Append("  ServicesModule: ").Append(ServicesModule).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
