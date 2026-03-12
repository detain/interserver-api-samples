package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * Example map of TLDs to service IDs for domain ordering.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Example map of TLDs to service IDs for domain ordering.")

public class DomainOrderTldServices   {
  private Integer _asia = null;
  private Integer _be = null;
  private Integer _biz = null;
  private Integer _ca = null;

  /**
   * Service ID for .asia TLD
   **/
  public DomainOrderTldServices _asia(Integer _asia) {
    this._asia = _asia;
    return this;
  }

  
  
  @Schema(example = "10001", description = "Service ID for .asia TLD")
  @JsonProperty(".asia")
  @NotNull
  public Integer getAsia() {
    return _asia;
  }
  public void setAsia(Integer _asia) {
    this._asia = _asia;
  }

  /**
   * Service ID for .be TLD
   **/
  public DomainOrderTldServices _be(Integer _be) {
    this._be = _be;
    return this;
  }

  
  
  @Schema(example = "10002", description = "Service ID for .be TLD")
  @JsonProperty(".be")
  @NotNull
  public Integer getBe() {
    return _be;
  }
  public void setBe(Integer _be) {
    this._be = _be;
  }

  /**
   * Service ID for .biz TLD
   **/
  public DomainOrderTldServices _biz(Integer _biz) {
    this._biz = _biz;
    return this;
  }

  
  
  @Schema(example = "10003", description = "Service ID for .biz TLD")
  @JsonProperty(".biz")
  @NotNull
  public Integer getBiz() {
    return _biz;
  }
  public void setBiz(Integer _biz) {
    this._biz = _biz;
  }

  /**
   * Service ID for .ca TLD
   **/
  public DomainOrderTldServices _ca(Integer _ca) {
    this._ca = _ca;
    return this;
  }

  
  
  @Schema(example = "10004", description = "Service ID for .ca TLD")
  @JsonProperty(".ca")
  @NotNull
  public Integer getCa() {
    return _ca;
  }
  public void setCa(Integer _ca) {
    this._ca = _ca;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainOrderTldServices domainOrderTldServices = (DomainOrderTldServices) o;
    return Objects.equals(_asia, domainOrderTldServices._asia) &&
        Objects.equals(_be, domainOrderTldServices._be) &&
        Objects.equals(_biz, domainOrderTldServices._biz) &&
        Objects.equals(_ca, domainOrderTldServices._ca);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_asia, _be, _biz, _ca);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
