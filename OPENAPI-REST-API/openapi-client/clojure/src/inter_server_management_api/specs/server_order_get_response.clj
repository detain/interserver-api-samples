(ns inter-server-management-api.specs.server-order-get-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.form-values :refer :all]
            [inter-server-management-api.specs.config-ids :refer :all]
            [inter-server-management-api.specs.cpu :refer :all]
            [inter-server-management-api.specs.config-lists :refer :all]
            [inter-server-management-api.specs.field-label :refer :all]
            [inter-server-management-api.specs.region :refer :all]
            [inter-server-management-api.specs.asset-server :refer :all]
            )
  (:import (java.io File)))


(def server-order-get-response-data
  {
   (ds/req :form_values) form-values-spec
   (ds/req :config_ids) config-ids-spec
   (ds/req :cpu) int?
   (ds/req :cpu_li) (s/map-of string? cpu-spec)
   (ds/req :config_li) config-lists-spec
   (ds/req :frequency) int?
   (ds/req :currency) string?
   (ds/req :country) string?
   (ds/req :step) string?
   (ds/opt :field_label) (s/map-of string? field-label-spec)
   (ds/opt :cpu_cores) (s/map-of string? (s/map-of string? cpu-with-defaults-spec))
   (ds/opt :currencySymbol) string?
   (ds/opt :custid) int?
   (ds/opt :ima) string?
   (ds/opt :regions) (s/coll-of region-spec)
   (ds/opt :asset_servers) (s/coll-of asset-server-spec)
   (ds/opt :buy_it_servers) (s/coll-of any?)
   (ds/opt :display_showmore) string?
   (ds/opt :cust_discount) float?
   })

(def server-order-get-response-spec
  (ds/spec
    {:name ::server-order-get-response
     :spec server-order-get-response-data}))
