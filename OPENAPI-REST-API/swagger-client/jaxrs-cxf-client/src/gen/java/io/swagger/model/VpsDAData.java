package io.swagger.model;

import io.swagger.model.VpsDALicense;
import io.swagger.v3.oas.annotations.media.Schema;

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
  * DirectAdmin license options available for a VPS.
 **/
@Schema(description="DirectAdmin license options available for a VPS.")
public class VpsDAData   {
  
  @Schema(description = "")
  private VpsDALicense free = null;
 /**
   * Get free
   * @return free
  **/
  @JsonProperty("free")
  public VpsDALicense getFree() {
    return free;
  }

  public void setFree(VpsDALicense free) {
    this.free = free;
  }

  public VpsDAData free(VpsDALicense free) {
    this.free = free;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsDAData {\n");
    
    sb.append("    free: ").append(toIndentedString(free)).append("\n");
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
