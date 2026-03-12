package io.swagger.model;

import io.swagger.model.ServerAssets;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ServerExtraInfoTables   {

  private @Valid ServerAssets assets = null;

  /**
   **/
  public ServerExtraInfoTables assets(ServerAssets assets) {
    this.assets = assets;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("assets")
  @NotNull

  public ServerAssets getAssets() {
    return assets;
  }
  public void setAssets(ServerAssets assets) {
    this.assets = assets;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerExtraInfoTables serverExtraInfoTables = (ServerExtraInfoTables) o;
    return Objects.equals(assets, serverExtraInfoTables.assets);
  }

  @Override
  public int hashCode() {
    return Objects.hash(assets);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerExtraInfoTables {\n");
    
    sb.append("    assets: ").append(toIndentedString(assets)).append("\n");
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
