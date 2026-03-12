(ns inter-server-management-api.specs.account-info-limits-inner
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def account-info-limits-inner-data
  {
   (ds/opt :start) string?
   (ds/opt :end) string?
   })

(def account-info-limits-inner-spec
  (ds/spec
    {:name ::account-info-limits-inner
     :spec account-info-limits-inner-data}))
