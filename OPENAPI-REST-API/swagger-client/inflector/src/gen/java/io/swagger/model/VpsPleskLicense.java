package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class VpsPleskLicense   {
  @JsonProperty("id")
  private Integer id = null;
  @JsonProperty("name")
  private String name = null;
  @JsonProperty("sub_name")
  private String subName = null;
  @JsonProperty("cost")
  private Integer cost = null;
  /**
   **/
  public VpsPleskLicense id(Integer id) {
    this.id = id;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("id")
  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  /**
   **/
  public VpsPleskLicense name(String name) {
    this.name = name;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  public VpsPleskLicense subName(String subName) {
    this.subName = subName;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("sub_name")
  public String getSubName() {
    return subName;
  }
  public void setSubName(String subName) {
    this.subName = subName;
  }

  /**
   **/
  public VpsPleskLicense cost(Integer cost) {
    this.cost = cost;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("cost")
  public Integer getCost() {
    return cost;
  }
  public void setCost(Integer cost) {
    this.cost = cost;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsPleskLicense vpsPleskLicense = (VpsPleskLicense) o;
    return Objects.equals(id, vpsPleskLicense.id) &&
        Objects.equals(name, vpsPleskLicense.name) &&
        Objects.equals(subName, vpsPleskLicense.subName) &&
        Objects.equals(cost, vpsPleskLicense.cost);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, name, subName, cost);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsPleskLicense {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    subName: ").append(toIndentedString(subName)).append("\n");
    sb.append("    cost: ").append(toIndentedString(cost)).append("\n");
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
