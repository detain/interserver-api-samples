package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="A control panel option available when ordering a dedicated server.")

public class ServerOrderControlPanel   {
  private String id = null;
  private Integer price = null;
  private String img = null;
  private String shortDesc = null;
  private String longDesc = null;
  private String osType = null;
  private Integer monthlyPrice = null;
  private List<String> types = new ArrayList<String>();
  private String priceDisplay = null;
  private String monthlyPriceDisplay = null;

  /**
   * Control Panel ID.
   **/
  
  @Schema(example = "9", description = "Control Panel ID.")
  @JsonProperty("id")
  @NotNull
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * Control Panel price.
   **/
  
  @Schema(example = "80", description = "Control Panel price.")
  @JsonProperty("price")
  @NotNull
  public Integer getPrice() {
    return price;
  }
  public void setPrice(Integer price) {
    this.price = price;
  }

  /**
   * Control Panel image.
   **/
  
  @Schema(example = "cpanel.gif", description = "Control Panel image.")
  @JsonProperty("img")
  @NotNull
  public String getImg() {
    return img;
  }
  public void setImg(String img) {
    this.img = img;
  }

  /**
   * Short description of the control panel.
   **/
  
  @Schema(example = "cPanel ($45+)", description = "Short description of the control panel.")
  @JsonProperty("short_desc")
  @NotNull
  public String getShortDesc() {
    return shortDesc;
  }
  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  /**
   * Long description of the control panel.
   **/
  
  @Schema(description = "Long description of the control panel.")
  @JsonProperty("long_desc")
  @NotNull
  public String getLongDesc() {
    return longDesc;
  }
  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  /**
   * OS types compatible with the control panel.
   **/
  
  @Schema(description = "OS types compatible with the control panel.")
  @JsonProperty("os_type")
  @NotNull
  public String getOsType() {
    return osType;
  }
  public void setOsType(String osType) {
    this.osType = osType;
  }

  /**
   * Monthly price.
   **/
  
  @Schema(example = "0", description = "Monthly price.")
  @JsonProperty("monthly_price")
  @NotNull
  public Integer getMonthlyPrice() {
    return monthlyPrice;
  }
  public void setMonthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  /**
   * List of types.
   **/
  
  @Schema(example = "[\"1\",\"2\",\"4\",\"5\",\"8\",\"17\",\"23\",\"30\",\"51\"]", description = "List of types.")
  @JsonProperty("types")
  @NotNull
  public List<String> getTypes() {
    return types;
  }
  public void setTypes(List<String> types) {
    this.types = types;
  }

  /**
   * Display of control panel price.
   **/
  
  @Schema(example = "$80.00", description = "Display of control panel price.")
  @JsonProperty("price_display")
  @NotNull
  public String getPriceDisplay() {
    return priceDisplay;
  }
  public void setPriceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
  }

  /**
   * Display of monthly control panel price.
   **/
  
  @Schema(example = "$0.00", description = "Display of monthly control panel price.")
  @JsonProperty("monthly_price_display")
  @NotNull
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }
  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerOrderControlPanel serverOrderControlPanel = (ServerOrderControlPanel) o;
    return Objects.equals(id, serverOrderControlPanel.id) &&
        Objects.equals(price, serverOrderControlPanel.price) &&
        Objects.equals(img, serverOrderControlPanel.img) &&
        Objects.equals(shortDesc, serverOrderControlPanel.shortDesc) &&
        Objects.equals(longDesc, serverOrderControlPanel.longDesc) &&
        Objects.equals(osType, serverOrderControlPanel.osType) &&
        Objects.equals(monthlyPrice, serverOrderControlPanel.monthlyPrice) &&
        Objects.equals(types, serverOrderControlPanel.types) &&
        Objects.equals(priceDisplay, serverOrderControlPanel.priceDisplay) &&
        Objects.equals(monthlyPriceDisplay, serverOrderControlPanel.monthlyPriceDisplay);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, price, img, shortDesc, longDesc, osType, monthlyPrice, types, priceDisplay, monthlyPriceDisplay);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderControlPanel {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    img: ").append(toIndentedString(img)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    longDesc: ").append(toIndentedString(longDesc)).append("\n");
    sb.append("    osType: ").append(toIndentedString(osType)).append("\n");
    sb.append("    monthlyPrice: ").append(toIndentedString(monthlyPrice)).append("\n");
    sb.append("    types: ").append(toIndentedString(types)).append("\n");
    sb.append("    priceDisplay: ").append(toIndentedString(priceDisplay)).append("\n");
    sb.append("    monthlyPriceDisplay: ").append(toIndentedString(monthlyPriceDisplay)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
