package io.swagger.model;

import io.swagger.model.VPSTrafficDataDataSectionResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
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
  * VPS Traffic Data Section Response
 **/
@Schema(description="VPS Traffic Data Section Response")
public class VpsTrafficDataSectionResponse   {
  
  @Schema(required = true, description = "")
  private String name = null;
  
  @Schema(required = true, description = "")
  private List<VPSTrafficDataDataSectionResponse> data = new ArrayList<VPSTrafficDataDataSectionResponse>();
 /**
   * Get name
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

  public VpsTrafficDataSectionResponse name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Get data
   * @return data
  **/
  @JsonProperty("data")
  @NotNull
  public List<VPSTrafficDataDataSectionResponse> getData() {
    return data;
  }

  public void setData(List<VPSTrafficDataDataSectionResponse> data) {
    this.data = data;
  }

  public VpsTrafficDataSectionResponse data(List<VPSTrafficDataDataSectionResponse> data) {
    this.data = data;
    return this;
  }

  public VpsTrafficDataSectionResponse addDataItem(VPSTrafficDataDataSectionResponse dataItem) {
    this.data.add(dataItem);
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsTrafficDataSectionResponse {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    data: ").append(toIndentedString(data)).append("\n");
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
