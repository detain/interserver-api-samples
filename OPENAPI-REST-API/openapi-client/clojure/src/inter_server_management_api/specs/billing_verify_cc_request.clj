(ns inter-server-management-api.specs.billing-verify-cc-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def billing-verify-cc-request-data
  {
   (ds/opt :idx) int?
   (ds/opt :cc_ccv2) string?
   (ds/opt :cc_amount1) string?
   (ds/opt :cc_amount2) string?
   (ds/opt :terms) boolean?
   })

(def billing-verify-cc-request-spec
  (ds/spec
    {:name ::billing-verify-cc-request
     :spec billing-verify-cc-request-data}))
