using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Contains the complete catalog of available modules, services, service types, and service categories.
  /// </summary>
  [DataContract]
  public class ServicesInfo {
    /// <summary>
    /// Gets or Sets Modules
    /// </summary>
    [DataMember(Name="modules", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "modules")]
    public Modules Modules { get; set; }

    /// <summary>
    /// Gets or Sets Services
    /// </summary>
    [DataMember(Name="services", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services")]
    public Services Services { get; set; }

    /// <summary>
    /// Gets or Sets ServiceTypes
    /// </summary>
    [DataMember(Name="serviceTypes", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceTypes")]
    public ServiceTypes ServiceTypes { get; set; }

    /// <summary>
    /// Gets or Sets ServiceCategories
    /// </summary>
    [DataMember(Name="serviceCategories", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceCategories")]
    public ServiceCategories ServiceCategories { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServicesInfo {\n");
      sb.Append("  Modules: ").Append(Modules).Append("\n");
      sb.Append("  Services: ").Append(Services).Append("\n");
      sb.Append("  ServiceTypes: ").Append(ServiceTypes).Append("\n");
      sb.Append("  ServiceCategories: ").Append(ServiceCategories).Append("\n");
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
