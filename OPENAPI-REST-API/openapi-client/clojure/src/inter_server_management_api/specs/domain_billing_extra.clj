(ns inter-server-management-api.specs.domain-billing-extra
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.domain-order-response :refer :all]
            [inter-server-management-api.specs.domain-prov-process-pending :refer :all]
            )
  (:import (java.io File)))


(def domain-billing-extra-data
  {
   (ds/opt :order) domain-order-response-spec
   (ds/opt :order_id) string?
   (ds/opt :domain_id) string?
   (ds/opt :provProcessPending) domain-prov-process-pending-spec
   (ds/opt :email) string?
   (ds/opt :firstname) string?
   (ds/opt :lastname) string?
   (ds/opt :company) string?
   (ds/opt :address) string?
   (ds/opt :address2) string?
   (ds/opt :address3) string?
   (ds/opt :city) string?
   (ds/opt :state) string?
   (ds/opt :zip) string?
   (ds/opt :country) string?
   (ds/opt :phone) string?
   (ds/opt :fax) string?
   })

(def domain-billing-extra-spec
  (ds/spec
    {:name ::domain-billing-extra
     :spec domain-billing-extra-data}))
