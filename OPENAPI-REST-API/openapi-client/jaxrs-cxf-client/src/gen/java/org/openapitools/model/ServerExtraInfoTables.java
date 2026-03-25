package org.openapitools.model;

import org.openapitools.model.ServerAssets;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ServerExtraInfoTables  {
  
  @ApiModelProperty(required = true, value = "")

  private ServerAssets assets;
 /**
   * Get assets
   * @return assets
  **/
  @JsonProperty("assets")
  public ServerAssets getAssets() {
    return assets;
  }

  public void setAssets(ServerAssets assets) {
    this.assets = assets;
  }

  public ServerExtraInfoTables assets(ServerAssets assets) {
    this.assets = assets;
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
    ServerExtraInfoTables serverExtraInfoTables = (ServerExtraInfoTables) o;
    return Objects.equals(this.assets, serverExtraInfoTables.assets);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

