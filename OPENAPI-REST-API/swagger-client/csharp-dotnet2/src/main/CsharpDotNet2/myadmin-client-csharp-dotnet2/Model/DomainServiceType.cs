using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Service type definition for a domain registration, including name, pricing, and category.
  /// </summary>
  [DataContract]
  public class DomainServiceType {
    /// <summary>
    /// Service type ID.
    /// </summary>
    /// <value>Service type ID.</value>
    [DataMember(Name="services_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_id")]
    public string ServicesId { get; set; }

    /// <summary>
    /// Service type name (e.g., .com Registration).
    /// </summary>
    /// <value>Service type name (e.g., .com Registration).</value>
    [DataMember(Name="services_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_name")]
    public string ServicesName { get; set; }

    /// <summary>
    /// Service cost per billing period.
    /// </summary>
    /// <value>Service cost per billing period.</value>
    [DataMember(Name="services_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_cost")]
    public string ServicesCost { get; set; }

    /// <summary>
    /// Service category ID.
    /// </summary>
    /// <value>Service category ID.</value>
    [DataMember(Name="services_category", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_category")]
    public string ServicesCategory { get; set; }

    /// <summary>
    /// Whether this service type is available for purchase.
    /// </summary>
    /// <value>Whether this service type is available for purchase.</value>
    [DataMember(Name="services_buyable", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_buyable")]
    public string ServicesBuyable { get; set; }

    /// <summary>
    /// Internal service type identifier.
    /// </summary>
    /// <value>Internal service type identifier.</value>
    [DataMember(Name="services_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_type")]
    public string ServicesType { get; set; }

    /// <summary>
    /// TLD or first configurable field for the service type.
    /// </summary>
    /// <value>TLD or first configurable field for the service type.</value>
    [DataMember(Name="services_field1", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_field1")]
    public string ServicesField1 { get; set; }

    /// <summary>
    /// Second configurable field for the service type.
    /// </summary>
    /// <value>Second configurable field for the service type.</value>
    [DataMember(Name="services_field2", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_field2")]
    public string ServicesField2 { get; set; }

    /// <summary>
    /// Backend module handling this service type.
    /// </summary>
    /// <value>Backend module handling this service type.</value>
    [DataMember(Name="services_module", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_module")]
    public string ServicesModule { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainServiceType {\n");
      sb.Append("  ServicesId: ").Append(ServicesId).Append("\n");
      sb.Append("  ServicesName: ").Append(ServicesName).Append("\n");
      sb.Append("  ServicesCost: ").Append(ServicesCost).Append("\n");
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
