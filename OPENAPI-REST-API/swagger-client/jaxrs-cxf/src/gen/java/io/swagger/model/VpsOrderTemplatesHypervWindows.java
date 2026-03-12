package io.swagger.model;

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

public class VpsOrderTemplatesHypervWindows   {
  
  @Schema(example = "2019 Standard", description = "")
  private String windows2019Standard = null;
  
  @Schema(example = "2022", description = "")
  private String windows2022 = null;
 /**
   * Get windows2019Standard
   * @return windows2019Standard
  **/
  @JsonProperty("Windows2019Standard")
  @NotNull
  public String getWindows2019Standard() {
    return windows2019Standard;
  }

  public void setWindows2019Standard(String windows2019Standard) {
    this.windows2019Standard = windows2019Standard;
  }

  public VpsOrderTemplatesHypervWindows windows2019Standard(String windows2019Standard) {
    this.windows2019Standard = windows2019Standard;
    return this;
  }

 /**
   * Get windows2022
   * @return windows2022
  **/
  @JsonProperty("Windows2022")
  @NotNull
  public String getWindows2022() {
    return windows2022;
  }

  public void setWindows2022(String windows2022) {
    this.windows2022 = windows2022;
  }

  public VpsOrderTemplatesHypervWindows windows2022(String windows2022) {
    this.windows2022 = windows2022;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderTemplatesHypervWindows {\n");
    
    sb.append("    windows2019Standard: ").append(toIndentedString(windows2019Standard)).append("\n");
    sb.append("    windows2022: ").append(toIndentedString(windows2022)).append("\n");
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
