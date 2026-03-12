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
  * A display label for a field in the server order form.
 **/
@Schema(description="A display label for a field in the server order form.")
public class ServerOrderFieldLabel   {
  
  @Schema(example = "Bandwidth", description = "Name of the field label.")
 /**
   * Name of the field label.  
  **/
  private String name = null;
  
  @Schema(example = "1", description = "Active status of the field label.")
 /**
   * Active status of the field label.  
  **/
  private Integer active = null;
 /**
   * Name of the field label.
   * @return name
  **/
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public ServerOrderFieldLabel name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Active status of the field label.
   * @return active
  **/
  @JsonProperty("active")
  public Integer getActive() {
    return active;
  }

  public void setActive(Integer active) {
    this.active = active;
  }

  public ServerOrderFieldLabel active(Integer active) {
    this.active = active;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderFieldLabel {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    active: ").append(toIndentedString(active)).append("\n");
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
