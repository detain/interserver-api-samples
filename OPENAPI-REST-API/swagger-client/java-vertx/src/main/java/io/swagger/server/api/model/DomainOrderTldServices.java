package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Example map of TLDs to service IDs for domain ordering.
 */




public class DomainOrderTldServices   {
  private Integer _asia = null;

  private Integer _be = null;

  private Integer _biz = null;

  private Integer _ca = null;

  public DomainOrderTldServices _asia(Integer _asia) {
    this._asia = _asia;
    return this;
  }

  /**
   * Service ID for .asia TLD
   * @return _asia
   **/
    public Integer getAsia() {
    return _asia;
  }

  public void setAsia(Integer _asia) {
    this._asia = _asia;
  }

  public DomainOrderTldServices _be(Integer _be) {
    this._be = _be;
    return this;
  }

  /**
   * Service ID for .be TLD
   * @return _be
   **/
    public Integer getBe() {
    return _be;
  }

  public void setBe(Integer _be) {
    this._be = _be;
  }

  public DomainOrderTldServices _biz(Integer _biz) {
    this._biz = _biz;
    return this;
  }

  /**
   * Service ID for .biz TLD
   * @return _biz
   **/
    public Integer getBiz() {
    return _biz;
  }

  public void setBiz(Integer _biz) {
    this._biz = _biz;
  }

  public DomainOrderTldServices _ca(Integer _ca) {
    this._ca = _ca;
    return this;
  }

  /**
   * Service ID for .ca TLD
   * @return _ca
   **/
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
    return Objects.equals(this._asia, domainOrderTldServices._asia) &&
        Objects.equals(this._be, domainOrderTldServices._be) &&
        Objects.equals(this._biz, domainOrderTldServices._biz) &&
        Objects.equals(this._ca, domainOrderTldServices._ca);
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
