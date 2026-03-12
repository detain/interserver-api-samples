package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import org.springframework.validation.annotation.Validated;
import org.openapitools.jackson.nullable.JsonNullable;
import io.swagger.configuration.NotUndefined;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonSetter;
import com.fasterxml.jackson.annotation.Nulls;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * InlineResponse20018ServiceTypes
 */
@Validated
@NotUndefined



public class InlineResponse20018ServiceTypes   {
  @JsonProperty("services_id")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private Integer servicesId = null;

  @JsonProperty("services_name")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String servicesName = null;

  @JsonProperty("services_cost")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private Integer servicesCost = null;

  @JsonProperty("services_field1")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String servicesField1 = null;

  @JsonProperty("services_field2")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String servicesField2 = null;

  @JsonProperty("services_module")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String servicesModule = null;


  public InlineResponse20018ServiceTypes servicesId(Integer servicesId) { 

    this.servicesId = servicesId;
    return this;
  }

  /**
   * Get servicesId
   * @return servicesId
   **/
  
  @Schema(example = "11552", description = "")
  
  public Integer getServicesId() {  
    return servicesId;
  }



  public void setServicesId(Integer servicesId) { 
    this.servicesId = servicesId;
  }

  public InlineResponse20018ServiceTypes servicesName(String servicesName) { 

    this.servicesName = servicesName;
    return this;
  }

  /**
   * Get servicesName
   * @return servicesName
   **/
  
  @Schema(example = "Current IP + Scrub", description = "")
  
  public String getServicesName() {  
    return servicesName;
  }



  public void setServicesName(String servicesName) { 
    this.servicesName = servicesName;
  }

  public InlineResponse20018ServiceTypes servicesCost(Integer servicesCost) { 

    this.servicesCost = servicesCost;
    return this;
  }

  /**
   * Get servicesCost
   * @return servicesCost
   **/
  
  @Schema(example = "5", description = "")
  
  public Integer getServicesCost() {  
    return servicesCost;
  }



  public void setServicesCost(Integer servicesCost) { 
    this.servicesCost = servicesCost;
  }

  public InlineResponse20018ServiceTypes servicesField1(String servicesField1) { 

    this.servicesField1 = servicesField1;
    return this;
  }

  /**
   * Get servicesField1
   * @return servicesField1
   **/
  
  @Schema(description = "")
  
  public String getServicesField1() {  
    return servicesField1;
  }



  public void setServicesField1(String servicesField1) { 
    this.servicesField1 = servicesField1;
  }

  public InlineResponse20018ServiceTypes servicesField2(String servicesField2) { 

    this.servicesField2 = servicesField2;
    return this;
  }

  /**
   * Get servicesField2
   * @return servicesField2
   **/
  
  @Schema(description = "")
  
  public String getServicesField2() {  
    return servicesField2;
  }



  public void setServicesField2(String servicesField2) { 
    this.servicesField2 = servicesField2;
  }

  public InlineResponse20018ServiceTypes servicesModule(String servicesModule) { 

    this.servicesModule = servicesModule;
    return this;
  }

  /**
   * Get servicesModule
   * @return servicesModule
   **/
  
  @Schema(example = "scrub_ips", description = "")
  
  public String getServicesModule() {  
    return servicesModule;
  }



  public void setServicesModule(String servicesModule) { 
    this.servicesModule = servicesModule;
  }

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20018ServiceTypes inlineResponse20018ServiceTypes = (InlineResponse20018ServiceTypes) o;
    return Objects.equals(this.servicesId, inlineResponse20018ServiceTypes.servicesId) &&
        Objects.equals(this.servicesName, inlineResponse20018ServiceTypes.servicesName) &&
        Objects.equals(this.servicesCost, inlineResponse20018ServiceTypes.servicesCost) &&
        Objects.equals(this.servicesField1, inlineResponse20018ServiceTypes.servicesField1) &&
        Objects.equals(this.servicesField2, inlineResponse20018ServiceTypes.servicesField2) &&
        Objects.equals(this.servicesModule, inlineResponse20018ServiceTypes.servicesModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(servicesId, servicesName, servicesCost, servicesField1, servicesField2, servicesModule);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20018ServiceTypes {\n");
    
    sb.append("    servicesId: ").append(toIndentedString(servicesId)).append("\n");
    sb.append("    servicesName: ").append(toIndentedString(servicesName)).append("\n");
    sb.append("    servicesCost: ").append(toIndentedString(servicesCost)).append("\n");
    sb.append("    servicesField1: ").append(toIndentedString(servicesField1)).append("\n");
    sb.append("    servicesField2: ").append(toIndentedString(servicesField2)).append("\n");
    sb.append("    servicesModule: ").append(toIndentedString(servicesModule)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
