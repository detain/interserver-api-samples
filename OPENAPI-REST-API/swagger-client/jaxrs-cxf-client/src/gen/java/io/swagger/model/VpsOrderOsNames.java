package io.swagger.model;

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
  * OS Names
 **/
@Schema(description="OS Names")
public class VpsOrderOsNames   {
  
  @Schema(example = "OpenSUSE", description = "")
  private String opensuse = null;
  
  @Schema(example = "Ubuntu", description = "")
  private String ubuntu = null;
 /**
   * Get opensuse
   * @return opensuse
  **/
  @JsonProperty("opensuse")
  public String getOpensuse() {
    return opensuse;
  }

  public void setOpensuse(String opensuse) {
    this.opensuse = opensuse;
  }

  public VpsOrderOsNames opensuse(String opensuse) {
    this.opensuse = opensuse;
    return this;
  }

 /**
   * Get ubuntu
   * @return ubuntu
  **/
  @JsonProperty("ubuntu")
  public String getUbuntu() {
    return ubuntu;
  }

  public void setUbuntu(String ubuntu) {
    this.ubuntu = ubuntu;
  }

  public VpsOrderOsNames ubuntu(String ubuntu) {
    this.ubuntu = ubuntu;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderOsNames {\n");
    
    sb.append("    opensuse: ").append(toIndentedString(opensuse)).append("\n");
    sb.append("    ubuntu: ").append(toIndentedString(ubuntu)).append("\n");
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
