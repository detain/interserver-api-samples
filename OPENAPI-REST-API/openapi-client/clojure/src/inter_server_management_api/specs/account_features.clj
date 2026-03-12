(ns inter-server-management-api.specs.account-features
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def account-features-data
  {
   (ds/opt :disable_reset) int?
   (ds/opt :disable_reinstall) int?
   })

(def account-features-spec
  (ds/spec
    {:name ::account-features
     :spec account-features-data}))
