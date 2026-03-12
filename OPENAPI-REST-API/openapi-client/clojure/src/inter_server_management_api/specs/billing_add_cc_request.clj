(ns inter-server-management-api.specs.billing-add-cc-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def billing-add-cc-request-data
  {
   (ds/opt :name) string?
   (ds/opt :address) string?
   (ds/opt :city) string?
   (ds/opt :state) string?
   (ds/opt :country) string?
   (ds/opt :zip) string?
   (ds/opt :cc) string?
   (ds/opt :cc_exp) string?
   (ds/opt :cc_ccv2) string?
   })

(def billing-add-cc-request-spec
  (ds/spec
    {:name ::billing-add-cc-request
     :spec billing-add-cc-request-data}))
