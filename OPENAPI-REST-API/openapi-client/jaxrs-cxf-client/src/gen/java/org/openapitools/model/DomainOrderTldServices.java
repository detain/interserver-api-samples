package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Example map of TLDs to service IDs for domain ordering.
 */
@ApiModel(description="Example map of TLDs to service IDs for domain ordering.")

public class DomainOrderTldServices  {
  
 /**
  * Service ID for .asia TLD
  */
  @ApiModelProperty(example = "10001", value = "Service ID for .asia TLD")

  private Integer asia;

 /**
  * Service ID for .be TLD
  */
  @ApiModelProperty(example = "10002", value = "Service ID for .be TLD")

  private Integer be;

 /**
  * Service ID for .biz TLD
  */
  @ApiModelProperty(example = "10003", value = "Service ID for .biz TLD")

  private Integer biz;

 /**
  * Service ID for .ca TLD
  */
  @ApiModelProperty(example = "10004", value = "Service ID for .ca TLD")

  private Integer ca;
 /**
   * Service ID for .asia TLD
   * @return asia
  **/
  @JsonProperty(".asia")
  public Integer getAsia() {
    return asia;
  }

  public void setAsia(Integer asia) {
    this.asia = asia;
  }

  public DomainOrderTldServices asia(Integer asia) {
    this.asia = asia;
    return this;
  }

 /**
   * Service ID for .be TLD
   * @return be
  **/
  @JsonProperty(".be")
  public Integer getBe() {
    return be;
  }

  public void setBe(Integer be) {
    this.be = be;
  }

  public DomainOrderTldServices be(Integer be) {
    this.be = be;
    return this;
  }

 /**
   * Service ID for .biz TLD
   * @return biz
  **/
  @JsonProperty(".biz")
  public Integer getBiz() {
    return biz;
  }

  public void setBiz(Integer biz) {
    this.biz = biz;
  }

  public DomainOrderTldServices biz(Integer biz) {
    this.biz = biz;
    return this;
  }

 /**
   * Service ID for .ca TLD
   * @return ca
  **/
  @JsonProperty(".ca")
  public Integer getCa() {
    return ca;
  }

  public void setCa(Integer ca) {
    this.ca = ca;
  }

  public DomainOrderTldServices ca(Integer ca) {
    this.ca = ca;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainOrderTldServices domainOrderTldServices = (DomainOrderTldServices) o;
    return Objects.equals(this.asia, domainOrderTldServices.asia) &&
        Objects.equals(this.be, domainOrderTldServices.be) &&
        Objects.equals(this.biz, domainOrderTldServices.biz) &&
        Objects.equals(this.ca, domainOrderTldServices.ca);
  }

  @Override
  public int hashCode() {
    return Objects.hash(asia, be, biz, ca);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainOrderTldServices {\n");
    
    sb.append("    asia: ").append(toIndentedString(asia)).append("\n");
    sb.append("    be: ").append(toIndentedString(be)).append("\n");
    sb.append("    biz: ").append(toIndentedString(biz)).append("\n");
    sb.append("    ca: ").append(toIndentedString(ca)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

