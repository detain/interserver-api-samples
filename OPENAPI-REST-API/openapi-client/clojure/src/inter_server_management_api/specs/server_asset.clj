(ns inter-server-management-api.specs.server-asset
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.server-lease :refer :all]
            )
  (:import (java.io File)))


(def server-asset-data
  {
   (ds/req :id) int?
   (ds/req :order_id) string?
   (ds/req :hostname) string?
   (ds/req :status) string?
   (ds/req :primary_ipv4) string?
   (ds/req :primary_ipv6) string?
   (ds/req :datacenter) string?
   (ds/req :type_id) string?
   (ds/req :asset_tag) string?
   (ds/req :rack) string?
   (ds/req :row) string?
   (ds/req :col) string?
   (ds/req :unit_start) string?
   (ds/req :unit_end) string?
   (ds/req :unit_sub) string?
   (ds/req :ipmi_mac) string?
   (ds/req :ipmi_ip) string?
   (ds/req :ipmi_working) string?
   (ds/req :company) string?
   (ds/req :comments) string?
   (ds/req :make) string?
   (ds/req :model) string?
   (ds/req :description) string?
   (ds/req :customer_id) string?
   (ds/req :external_id) string?
   (ds/req :billing_status) string?
   (ds/req :overdue) string?
   (ds/req :asset_id) string?
   (ds/req :asset_name) string?
   (ds/req :rack_id) string?
   (ds/req :rack_name) string?
   (ds/req :rack_location) string?
   (ds/req :rack_size) string?
   (ds/req :rack_x) string?
   (ds/req :rack_y) string?
   (ds/req :switchports) (s/coll-of int?)
   (ds/req :vlans) (s/coll-of string?)
   (ds/req :vlans6) (s/coll-of string?)
   (ds/req :lease) server-lease-spec
   (ds/opt :mac) string?
   (ds/opt :ipmi_admin_username) string?
   (ds/opt :ipmi_admin_password) string?
   (ds/opt :ipmi_client_username) string?
   (ds/opt :ipmi_client_password) string?
   (ds/opt :ipmi_updated) string?
   (ds/opt :create_timestamp) string?
   (ds/opt :update_timestamp) string?
   (ds/opt :comment) string?
   })

(def server-asset-spec
  (ds/spec
    {:name ::server-asset
     :spec server-asset-data}))
