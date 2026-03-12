package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * Control panel license options available for a VPS.
 **/
@Schema(description="Control panel license options available for a VPS.")
public class VpsCPData   {
  
  @Schema(description = "Control panel name (e.g., cPanel).")
 /**
   * Control panel name (e.g., cPanel).  
  **/
  private String name = null;
  
  @Schema(description = "Monthly cost in cents for the control panel license.")
 /**
   * Monthly cost in cents for the control panel license.  
  **/
  private Integer cost = null;
 /**
   * Control panel name (e.g., cPanel).
   * @return name
  **/
  @JsonProperty("name")
  @NotNull
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public VpsCPData name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Monthly cost in cents for the control panel license.
   * @return cost
  **/
  @JsonProperty("cost")
  @NotNull
  public Integer getCost() {
    return cost;
  }

  public void setCost(Integer cost) {
    this.cost = cost;
  }

  public VpsCPData cost(Integer cost) {
    this.cost = cost;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsCPData {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    cost: ").append(toIndentedString(cost)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
