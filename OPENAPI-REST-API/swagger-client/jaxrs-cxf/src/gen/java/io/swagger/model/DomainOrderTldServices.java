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
  * Example map of TLDs to service IDs for domain ordering.
 **/
@Schema(description="Example map of TLDs to service IDs for domain ordering.")
public class DomainOrderTldServices   {
  
  @Schema(example = "10001", description = "Service ID for .asia TLD")
 /**
   * Service ID for .asia TLD  
  **/
  private Integer _asia = null;
  
  @Schema(example = "10002", description = "Service ID for .be TLD")
 /**
   * Service ID for .be TLD  
  **/
  private Integer _be = null;
  
  @Schema(example = "10003", description = "Service ID for .biz TLD")
 /**
   * Service ID for .biz TLD  
  **/
  private Integer _biz = null;
  
  @Schema(example = "10004", description = "Service ID for .ca TLD")
 /**
   * Service ID for .ca TLD  
  **/
  private Integer _ca = null;
 /**
   * Service ID for .asia TLD
   * @return _asia
  **/
  @JsonProperty(".asia")
  @NotNull
  public Integer getAsia() {
    return _asia;
  }

  public void setAsia(Integer _asia) {
    this._asia = _asia;
  }

  public DomainOrderTldServices _asia(Integer _asia) {
    this._asia = _asia;
    return this;
  }

 /**
   * Service ID for .be TLD
   * @return _be
  **/
  @JsonProperty(".be")
  @NotNull
  public Integer getBe() {
    return _be;
  }

  public void setBe(Integer _be) {
    this._be = _be;
  }

  public DomainOrderTldServices _be(Integer _be) {
    this._be = _be;
    return this;
  }

 /**
   * Service ID for .biz TLD
   * @return _biz
  **/
  @JsonProperty(".biz")
  @NotNull
  public Integer getBiz() {
    return _biz;
  }

  public void setBiz(Integer _biz) {
    this._biz = _biz;
  }

  public DomainOrderTldServices _biz(Integer _biz) {
    this._biz = _biz;
    return this;
  }

 /**
   * Service ID for .ca TLD
   * @return _ca
  **/
  @JsonProperty(".ca")
  @NotNull
  public Integer getCa() {
    return _ca;
  }

  public void setCa(Integer _ca) {
    this._ca = _ca;
  }

  public DomainOrderTldServices _ca(Integer _ca) {
    this._ca = _ca;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainOrderTldServices {\n");
    
    sb.append("    _asia: ").append(toIndentedString(_asia)).append("\n");
    sb.append("    _be: ").append(toIndentedString(_be)).append("\n");
    sb.append("    _biz: ").append(toIndentedString(_biz)).append("\n");
    sb.append("    _ca: ").append(toIndentedString(_ca)).append("\n");
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
