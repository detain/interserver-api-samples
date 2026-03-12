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

public class QuickserverOrderDistroSelUbuntu   {
  
  @Schema(example = "Ubuntu", description = "Selected distribution for Ubuntu.")
 /**
   * Selected distribution for Ubuntu.  
  **/
  private String ubuntu = null;
 /**
   * Selected distribution for Ubuntu.
   * @return ubuntu
  **/
  @JsonProperty("Ubuntu")
  @NotNull
  public String getUbuntu() {
    return ubuntu;
  }

  public void setUbuntu(String ubuntu) {
    this.ubuntu = ubuntu;
  }

  public QuickserverOrderDistroSelUbuntu ubuntu(String ubuntu) {
    this.ubuntu = ubuntu;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderDistroSelUbuntu {\n");
    
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
