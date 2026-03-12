(ns inter-server-management-api.specs.form-values
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def form-values-data
  {
   (ds/opt :memory) int?
   (ds/opt :bandwidth) int?
   (ds/opt :ips) int?
   (ds/opt :os) int?
   (ds/opt :cp) int?
   (ds/opt :raid) int?
   (ds/opt :hd) int?
   (ds/opt :region) int?
   })

(def form-values-spec
  (ds/spec
    {:name ::form-values
     :spec form-values-data}))
