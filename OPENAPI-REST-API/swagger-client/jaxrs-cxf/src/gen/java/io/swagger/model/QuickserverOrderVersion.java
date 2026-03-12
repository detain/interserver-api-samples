package io.swagger.model;

import io.swagger.model.QuickserverOrderVersionCentosstream8;
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
  * Version details.
 **/
@Schema(description="Version details.")
public class QuickserverOrderVersion   {
  
  @Schema(description = "")
  private QuickserverOrderVersionCentosstream8 centosstream8 = null;
 /**
   * Get centosstream8
   * @return centosstream8
  **/
  @JsonProperty("centosstream-8")
  @NotNull
  public QuickserverOrderVersionCentosstream8 getCentosstream8() {
    return centosstream8;
  }

  public void setCentosstream8(QuickserverOrderVersionCentosstream8 centosstream8) {
    this.centosstream8 = centosstream8;
  }

  public QuickserverOrderVersion centosstream8(QuickserverOrderVersionCentosstream8 centosstream8) {
    this.centosstream8 = centosstream8;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderVersion {\n");
    
    sb.append("    centosstream8: ").append(toIndentedString(centosstream8)).append("\n");
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
