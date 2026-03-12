package io.swagger.model;

import io.swagger.model.VpsOrderTemplatesHyperv;
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
  * Templates
 **/
@Schema(description="Templates")
public class VpsOrderTemplates   {
  
  @Schema(description = "")
  private VpsOrderTemplatesHyperv hyperv = null;
 /**
   * Get hyperv
   * @return hyperv
  **/
  @JsonProperty("hyperv")
  @NotNull
  public VpsOrderTemplatesHyperv getHyperv() {
    return hyperv;
  }

  public void setHyperv(VpsOrderTemplatesHyperv hyperv) {
    this.hyperv = hyperv;
  }

  public VpsOrderTemplates hyperv(VpsOrderTemplatesHyperv hyperv) {
    this.hyperv = hyperv;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderTemplates {\n");
    
    sb.append("    hyperv: ").append(toIndentedString(hyperv)).append("\n");
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
