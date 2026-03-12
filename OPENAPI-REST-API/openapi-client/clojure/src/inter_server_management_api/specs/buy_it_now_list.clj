(ns inter-server-management-api.specs.buy-it-now-list
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def buy-it-now-list-data
  {
   })

(def buy-it-now-list-spec
  (ds/spec
    {:name ::buy-it-now-list
     :spec buy-it-now-list-data}))
