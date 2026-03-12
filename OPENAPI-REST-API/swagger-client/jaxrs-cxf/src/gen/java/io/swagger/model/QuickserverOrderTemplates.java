package io.swagger.model;

import io.swagger.model.QuickserverOrderTemplatesUbuntu64;
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
  * Templates details.
 **/
@Schema(description="Templates details.")
public class QuickserverOrderTemplates   {
  
  @Schema(description = "")
  private QuickserverOrderTemplatesUbuntu64 ubuntu = null;
 /**
   * Get ubuntu
   * @return ubuntu
  **/
  @JsonProperty("Ubuntu")
  @NotNull
  public QuickserverOrderTemplatesUbuntu64 getUbuntu() {
    return ubuntu;
  }

  public void setUbuntu(QuickserverOrderTemplatesUbuntu64 ubuntu) {
    this.ubuntu = ubuntu;
  }

  public QuickserverOrderTemplates ubuntu(QuickserverOrderTemplatesUbuntu64 ubuntu) {
    this.ubuntu = ubuntu;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderTemplates {\n");
    
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
