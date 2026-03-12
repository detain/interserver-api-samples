package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;


/**
 * A control panel option available when ordering a dedicated server.
 **/
@Schema(description = "A control panel option available when ordering a dedicated server.")


public class ServerOrderControlPanel   {
  @JsonProperty("id")
  private String id = null;
  @JsonProperty("price")
  private Integer price = null;
  @JsonProperty("img")
  private String img = null;
  @JsonProperty("short_desc")
  private String shortDesc = null;
  @JsonProperty("long_desc")
  private String longDesc = null;
  @JsonProperty("os_type")
  private String osType = null;
  @JsonProperty("monthly_price")
  private Integer monthlyPrice = null;
  @JsonProperty("types")
  private List<String> types = null;
  @JsonProperty("price_display")
  private String priceDisplay = null;
  @JsonProperty("monthly_price_display")
  private String monthlyPriceDisplay = null;
  /**
   * Control Panel ID.
   **/
  public ServerOrderControlPanel id(String id) {
    this.id = id;
    return this;
  }

  
  @Schema(example = "9", description = "Control Panel ID.")
  @JsonProperty("id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * Control Panel price.
   **/
  public ServerOrderControlPanel price(Integer price) {
    this.price = price;
    return this;
  }

  
  @Schema(example = "80", description = "Control Panel price.")
  @JsonProperty("price")
  public Integer getPrice() {
    return price;
  }
  public void setPrice(Integer price) {
    this.price = price;
  }

  /**
   * Control Panel image.
   **/
  public ServerOrderControlPanel img(String img) {
    this.img = img;
    return this;
  }

  
  @Schema(example = "cpanel.gif", description = "Control Panel image.")
  @JsonProperty("img")
  public String getImg() {
    return img;
  }
  public void setImg(String img) {
    this.img = img;
  }

  /**
   * Short description of the control panel.
   **/
  public ServerOrderControlPanel shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  
  @Schema(example = "cPanel ($45+)", description = "Short description of the control panel.")
  @JsonProperty("short_desc")
  public String getShortDesc() {
    return shortDesc;
  }
  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  /**
   * Long description of the control panel.
   **/
  public ServerOrderControlPanel longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

  
  @Schema(description = "Long description of the control panel.")
  @JsonProperty("long_desc")
  public String getLongDesc() {
    return longDesc;
  }
  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  /**
   * OS types compatible with the control panel.
   **/
  public ServerOrderControlPanel osType(String osType) {
    this.osType = osType;
    return this;
  }

  
  @Schema(description = "OS types compatible with the control panel.")
  @JsonProperty("os_type")
  public String getOsType() {
    return osType;
  }
  public void setOsType(String osType) {
    this.osType = osType;
  }

  /**
   * Monthly price.
   **/
  public ServerOrderControlPanel monthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

  
  @Schema(example = "0", description = "Monthly price.")
  @JsonProperty("monthly_price")
  public Integer getMonthlyPrice() {
    return monthlyPrice;
  }
  public void setMonthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  /**
   * List of types.
   **/
  public ServerOrderControlPanel types(List<String> types) {
    this.types = types;
    return this;
  }

  
  @Schema(example = "[\"1\",\"2\",\"4\",\"5\",\"8\",\"17\",\"23\",\"30\",\"51\"]", description = "List of types.")
  @JsonProperty("types")
  public List<String> getTypes() {
    return types;
  }
  public void setTypes(List<String> types) {
    this.types = types;
  }

  /**
   * Display of control panel price.
   **/
  public ServerOrderControlPanel priceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
    return this;
  }

  
  @Schema(example = "$80.00", description = "Display of control panel price.")
  @JsonProperty("price_display")
  public String getPriceDisplay() {
    return priceDisplay;
  }
  public void setPriceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
  }

  /**
   * Display of monthly control panel price.
   **/
  public ServerOrderControlPanel monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
  }

  
  @Schema(example = "$0.00", description = "Display of monthly control panel price.")
  @JsonProperty("monthly_price_display")
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }
  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
