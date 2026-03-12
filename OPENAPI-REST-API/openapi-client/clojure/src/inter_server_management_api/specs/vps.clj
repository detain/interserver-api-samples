(ns inter-server-management-api.specs.vps
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-service-info :refer :all]
            [inter-server-management-api.specs.vps-client-link :refer :all]
            [inter-server-management-api.specs.vps-billing-details :refer :all]
            [inter-server-management-api.specs.vps-service-master :refer :all]
            [inter-server-management-api.specs.vps-service-extra :refer :all]
            [inter-server-management-api.specs.vps-extra-info-tables :refer :all]
            [inter-server-management-api.specs.vps-cp-data :refer :all]
            [inter-server-management-api.specs.vps-da-data :refer :all]
            [inter-server-management-api.specs.vps-plesk12-data :refer :all]
            [inter-server-management-api.specs.vps-service-addons :refer :all]
            [inter-server-management-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def vps-data
  {
   (ds/req :serviceInfo) vps-service-info-spec
   (ds/req :client_links) (s/coll-of vps-client-link-spec)
   (ds/req :billingDetails) vps-billing-details-spec
   (ds/req :custCurrency) string?
   (ds/req :custCurrencySymbol) string?
   (ds/req :serviceMaster) vps-service-master-spec
   (ds/req :package) string?
   (ds/req :serviceExtra) vps-service-extra-spec
   (ds/req :extraInfoTables) vps-extra-info-tables-spec
   (ds/req :module) string?
   (ds/req :token) string?
   (ds/req :da_link) int?
   (ds/req :sr_link) int?
   (ds/req :cp_data) vps-cp-data-spec
   (ds/req :da_data) vps-da-data-spec
   (ds/req :plesk12_data) vps-plesk12-data-spec
   (ds/req :serviceAddons) vps-service-addons-spec
   (ds/opt :os_template) string?
   (ds/opt :cpu_graph_data) any-type-spec
   })

(def vps-spec
  (ds/spec
    {:name ::vps
     :spec vps-data}))
